#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "iloc.h"
#include "code.h"

int get_offset(HashTable *table, int type, int count)
{
	int prev_offset = table->offset;

	table->offset += get_type_size(type) * count;
	return prev_offset;
}

CODE *new_code(OPERATION *op)
{
	CODE *new = (CODE *)malloc(sizeof(CODE));
	new->op = op;
	new->next = NULL;
	return new;
}

CODE *chain_op(CODE *list, OPERATION *op)
{
	CODE *new = new_code(op);
	CODE *current = list;

	while (current->next != NULL)
		current = current->next;

	current->next = new;

	return list;
}

CODE *chain_code(CODE *list1, CODE *list2)
{
	if (list1 == NULL)
		return list2;

	CODE *current = list1;

	while (current->next != NULL)
		current = current->next;

	current->next = list2;

	return list1;
}

OPERATION *load_imm(stack *scope, tree *ast)
{
	ast->temp = new_register();

	OPERATION *op = new_operation(OP_LOADI, ast->temp, NULL, NULL, ast->value->value.intval);
	return op;
}

OPERATION *load_id(stack *scope, tree *ast)
{
	SYMBOL *symbol = symbol_search(scope, hash_string(ast->value->value.strval));
	ast->temp = new_register();

	OPERATION *op = new_operation(OP_LOADAI, symbol->base_register, ast->temp, NULL, symbol->address);
	return op;
}

OPERATION *load_array(stack *scope, tree *ast)
{
	SYMBOL *symbol = symbol_search(scope, hash_string(ast->value->value.strval));
	ast->temp = new_register();

	OPERATION *op = new_operation(OP_LOADAO, symbol->base_register, ast->temp, NULL, symbol->address);
	return op;
}

CODE *store_imm(stack *scope, tree *dst, tree *src)
{
	OPERATION *load = load_imm(scope, src);
	CODE *code = new_code(load);

	SYMBOL *symbol = symbol_search(scope, hash_string(dst->value->value.strval));
	OPERATION *store = new_operation(OP_STOREAI, load->arg1, symbol->base_register, NULL, symbol->address);

	return chain_op(code, store);
}

OPERATION *store_reg(stack *scope, tree *dst, tree *src)
{
	SYMBOL *symbol = symbol_search(scope, hash_string(dst->value->value.strval));
	OPERATION *op = new_operation(OP_STOREAI, src->temp, symbol->base_register, NULL, symbol->address);

	return op;
}

CODE *assignment(stack *scope, tree *dst, tree *src)
{
	OPERATION *op;

	if (src->type != STRING && src->child == NULL)
	{
		return store_imm(scope, dst, src);
	}
	else
	{
		op = store_reg(scope, dst, src);
		return chain_op(src->code, op);
	}
}

int arithmetic_opcode(int opcode, int expr1_type, int expr2_type)
{
	if (expr1_type == IMM)
	{
		switch (opcode)
		{
		case OP_ADD:
			return OP_ADDI;
		case OP_SUB:
			return OP_RSUBI;
		case OP_MULT:
			return OP_MULTI;
		case OP_DIV:
			return OP_RDIVI;
		}
	}

	if (expr2_type == IMM)
	{
		switch (opcode)
		{
		case OP_ADD:
			return OP_ADDI;
		case OP_SUB:
			return OP_SUBI;
		case OP_MULT:
			return OP_MULTI;
		case OP_DIV:
			return OP_DIVI;
		}
	}

	return opcode;
}

void arithmetic(int opcode, tree *expr1, tree *op, tree *expr2)
{
	OPERATION *operation;

	op->temp = new_register();

	if (expr1->temp == NULL)
	{
		opcode = arithmetic_opcode(opcode, IMM, REG);
		operation = new_operation(opcode, expr2->temp, op->temp, NULL, expr1->value->value.intval);
	}
	else if (expr2->temp == NULL)
	{
		opcode = arithmetic_opcode(opcode, REG, IMM);
		operation = new_operation(opcode, expr1->temp, op->temp, NULL, expr2->value->value.intval);
	}
	else
	{
		opcode = arithmetic_opcode(opcode, REG, REG);
		operation = new_operation(opcode, expr1->temp, expr2->temp, op->temp, 0);
	}

	op->code = chain_code(expr1->code, expr2->code);
	op->code = chain_op(op->code, operation);
}

CODE *numeric_cmp_expression(int operation, char *temp1, char *temp2, tree *ast3, CODE *list)
{
	OPERATION *new_op = new_operation(operation, temp1, temp2, ast3->temp, -1);

	chain_op(list, new_op);
	//Opperçaão de comparação,rodar backpatch
	if (operation >= OP_CMP_LT && operation <= OP_CMP_NE)
	{
		char *x = malloc(sizeof(char) * MAX_SIZE);
		char *y = malloc(sizeof(char) * MAX_SIZE);
		chain_op(list, new_operation(OP_CBR, ast3->temp, x, y, -1));
		concat(&(ast3->true), new_patch(x));
		concat(&(ast3->false), new_patch(y));
	}
	return list;
}

CODE *oc_and_expression(tree *ast1, tree *ast2, tree *ast3)
{
	char *x = new_label();
	backpatch(ast1->true, x);
	ast3->true = ast2->true;
	concat(&(ast1->false), ast2->false);
	concat(&(ast3->false), ast1->false);
	chain_op(ast1->code, new_operation(OP_NOP, x, NULL, NULL, -1));
	chain_code(ast1->code, ast2->code);
	return ast1->code;
}

CODE *oc_or_expression(tree *ast1, tree *ast2, tree *ast3)
{
	char *x = new_label();
	backpatch(ast1->false, x);
	ast3->false = ast2->false;
	concat(&(ast1->true), ast2->true);
	concat(&(ast3->true), ast1->true);
	chain_op(ast1->code, new_operation(OP_NOP, x, NULL, NULL, -1));
	chain_code(ast1->code, ast2->code);
	return ast1->code;
}

void create_if_else(tree *node)
{
	tree *expression = node->child;
	tree *thenBlock = node->child->sibling;
	tree *elseBlock = node->child->sibling->sibling;

	char *true = new_label();
	backpatch(expression->true, true);
	expression->code = chain_op(expression->code, new_operation(OP_NOP, true, NULL, NULL, -1));
	expression->code = chain_code(expression->code, thenBlock->code);

	char *end = new_label();
	if (elseBlock != NULL)
	{
		char *false = new_label();
		backpatch(expression->false, false);
		chain_op(expression->code, new_operation(OP_JUMPI, end, NULL, NULL, -1));
		chain_op(expression->code, new_operation(OP_NOP, false, NULL, NULL, -1));
		expression->code = chain_code(expression->code, elseBlock->code);
	}
	else
	{
		backpatch(expression->false, end);
	}
	chain_op(expression->code, new_operation(OP_NOP, end, NULL, NULL, -1));
	node->code = expression->code;
}

void create_while(tree *expression, tree *block, tree *tree)
{
	char *start = new_label();
	CODE *code = new_code(new_operation(OP_NOP, start, NULL, NULL, -1));
	code = chain_code(code, expression->code);
	char *true = new_label();
	backpatch(expression->true, true);
	code = chain_op(code, new_operation(OP_NOP, true, NULL, NULL, -1));
	chain_code(code, block->code);

	chain_op(code, new_operation(OP_JUMPI, start, NULL, NULL, -1));
	char *false = new_label();
	backpatch(expression->false, false);
	chain_op(code, new_operation(OP_NOP, false, NULL, NULL, -1));
	tree->code = code;
}
void print_code(tree *ast)
{
	if (ast == NULL)
		return;

	CODE *current_code = ast->code;

	while (current_code != NULL)
	{
		print_opcode(current_code->op);
		current_code = current_code->next;
	}
}
