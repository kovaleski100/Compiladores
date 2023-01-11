/********************************************************************** 
# * INF01147 - Compiladores - Turma B (2022/1)                         *
# *                                                                    *
# *                                                                    *
# * André Carini                                                       *
# * Matheus Kovaleski                                                  *
# **********************************************************************/

#include "tree.h"

void libera(void* arvore) {
  AST *ast = (AST*) arvore;

  if (ast == NULL)
    return;

  libera(ast->child);
  libera(ast->sibling);

  if (ast->type == STRING && ast->value != NULL)
    free(ast->value->value.strval);

  free(ast->value);
  free(ast);
}

void exporta_rec(FILE* csv, AST* ast) {
  if (ast == NULL)
    return;

  AST* current_child = ast->child;

  while (current_child != NULL) {
    fprintf(csv, "%p, %p\n", ast, current_child);
    current_child = current_child->sibling;
  }

  exporta_rec(csv, ast->child);
  exporta_rec(csv, ast->sibling);
}

void exporta (void* arvore) {
  FILE* csv = fopen("./e3.csv", "w");
  AST* ast = (AST*) arvore;

  if (ast != NULL && ast->sibling == NULL && ast->child == NULL)
    fprintf(csv, "%p,\n", ast);
  else
    exporta_rec(csv, arvore);

  fclose(csv);
}

AST* new_ast(int child_count, ...) {
  AST* new = (AST*) malloc(sizeof(AST));
  AST* current_child = NULL;
  AST* current_arg = NULL;
  va_list child_list;

  new->type = NIL;
  new->value = NULL;
  new->child = NULL;
  new->sibling = NULL;
  new->temp = NULL;
  new->false = NULL;
  new->true = NULL;
  new->code = NULL;

  va_start(child_list, child_count);

  for(int child = 0; child < child_count; child++) {
    current_arg = va_arg(child_list, AST*);

    if (current_arg != NULL) {
      if (new->child == NULL) {
        new->child = current_arg;
        current_child = new->child;
      }
      else {
        current_child->sibling = current_arg;
        current_child = current_child->sibling;
      }
    }
  }

  va_end(child_list);

  return new;
}

AST* new_valued_ast(int type, TOKEN* value) {
  AST* new = (AST*) malloc(sizeof(AST));

  new->type = type;
  new->value = value;
  new->child = NULL;
  new->sibling = NULL;
  new->temp = NULL;
  new->false = NULL;
  new->true = NULL;
  new->code = NULL;

  return new;
}

AST* chain_ast(AST* a, AST* b) {
  AST* current = a;

  if (a == NULL)
    return b;
  else if (b == NULL)
    return a;
  else if (current->child == NULL) {
    current->child = b;
    a->code = chain_code(a->code, b->code);
    return a;
  }
  else {
    current = current->child;

    while(current->sibling != NULL)
      current = current->sibling;

    current->sibling = b;
    a->code = chain_code(a->code, b->code);
    return a;
  }
}