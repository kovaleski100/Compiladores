/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/1)                         *
# *                                                                    *
# *                                                                    *
# * André Carini                                                       *
# * Matheus Kovaleski                                                  *
# **********************************************************************/
#include "stack.h"
#include "errors.h"

void printStack(stack* s)
{
    int i = 0;
    while(s)
    {
        s = s->next;
        i++;
    }
    printf("%d\n", i);
}

void push(stack** s, HashTable* hash)
{
    stack* temp;
    temp = malloc(sizeof(stack));
    temp->hash = hash;
    temp->next = *s;
    *s = temp;
}

void pushTable(stack** s)
{
    HashTable *newTable = create_table();
    push(s, newTable);
}

HashTable* pop(stack** s)
{
    HashTable* hash;
    if(s)
    {
        stack* temp;
        temp = *s;
        hash = temp->hash;
        *s = (*s)->next;
        free(temp);
    }

    return hash;
}

void destroy_stack(stack* s)
{
    while(s != NULL)
        pop(&s);
}

Table* search(stack* top, symbol s)
{
    stack* temp;
	Table* currTable;
    temp = top;
    
	while(1)
    {
        if(top)
        {
			currTable = searchSymbolTable(top->hash, s);
			if(currTable)
			{
				return currTable;
			}
			top = top->next;
        }
        else
        {
            top = temp;
            return NULL;
        }
    }
}

void declareVar(stack* stack, int size, literal_type type, nature n, int line, value v, char* lexema)
{

    //Check vector of string
    if(type == TYPE_STRING && n == VEC)
    {
        printf("'%s' is of type string and is being declared as a Vector at line %d\n", lexema, line);
        exit(ERR_STRING_VECTOR);
    }

    symbol s = create_symbol(size, type, n, line, v, lexema);
    if(insertSymbol(stack->hash, s))
    {
        return;
    }
    else
    {
        printf("'%s' already declared, line %d\n", v.s, line);
        exit(ERR_DECLARED);
    }

}

void declareFunc(stack* stack, int size, literal_type type, nature n, int line, value v, char* lexema)
{
    symbol s = create_symbol(size, type, n, line, v, lexema);
    if(insertSymbol(stack->hash, s))
    {
        return;
    }
    else
    {
        printf("'%s' already declared, line %d\n", v.s, line);
        exit(ERR_DECLARED);
    }
}
void assignVar(stack* stack, symbol* var, symbol* value)
{
    Table* currTable = search(stack, *var);
	if(currTable)
	{
	   currTable->data->lv = value->lv;
	} else {
        printf("Variable '%s' not declared at line %d", var->lexema, var->line);
        exit(ERR_UNDECLARED);
    }

    symbol* symbol_in_table = currTable->data;
    //verify vector assignment
    if(symbol_in_table->nat == VEC)
    {
        printf("Vector '%s' assigned with a variable at line %d", symbol_in_table->lexema, symbol_in_table->line);
        exit(ERR_VECTOR);
    }

    if(symbol_in_table->nat == FUN)
    {
        printf("Function '%s' assigned with a variable at line %d", symbol_in_table->lexema, symbol_in_table->line);
        exit(ERR_FUNCTION);
    }
}

void assignVector(stack* stack, symbol* var, symbol* value)
{
	Table* currTable = search(stack, *var);
	if(currTable)
	{
	   currTable->data->lv = value->lv;
	} else {
        printf("Vector '%s' not declared at line %d", var->lexema, var->line);
        exit(ERR_UNDECLARED);
    }
    symbol* symbol_in_table = currTable->data;
    if(symbol_in_table->nat == VAR)
    {
        printf("Variable '%s' being used as a vector line %d", symbol_in_table->lexema, symbol_in_table->line);
        exit(ERR_VARIABLE);
    }
    if(symbol_in_table->nat == FUN)
    {
        printf("Function '%s' being used as a vector line %d", symbol_in_table->lexema, symbol_in_table->line);
        exit(ERR_FUNCTION);
    }
}

void call_function(stack* stack, symbol* funName)
{
	Table* currTable = search(stack, *funName);
	if(currTable)
	{
	   currTable->data->lv = funName->lv;
	} else {
        printf("Function '%s' not declared at line %d", funName->lexema, funName->line);
        exit(ERR_UNDECLARED);
    }

    symbol* symbol_in_table = currTable->data;
    if(symbol_in_table->nat == VEC)
    {
        printf("Vector '%s' being called as function at line %d", symbol_in_table->lexema, symbol_in_table->line);
        exit(ERR_VECTOR);
    }
    if(symbol_in_table->nat == VAR)
    {
        printf("Variable '%s' being called as function at line %d", symbol_in_table->lexema, symbol_in_table->line);
        exit(ERR_VARIABLE);
    }
}
