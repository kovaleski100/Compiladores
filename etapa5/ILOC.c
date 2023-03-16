// #include "ILOC.h"
// #include <stdlib.h>

// // char *cria_registrador()
// // {
// //     printf("Static");
// //     static char rotulo_number = '0';
// //     printf("Static");
// //     char *rotulo_name;
// //     strcpy(rotulo_name,strcat("r", &rotulo_number));
// //     rotulo_number++;
// //     return rotulo_name;
// // }

// // char* cria_label()
// // {
// //     static char label_number = '0';

// //     char *label_name;
// //     strcpy(label_name,strcat("l", &label_number));
// //     label_number++;
// //     return label_name;
// //}


// // /* Função que gera um rótulo único */
// // char* gera_rotulo() {
// //     static int contador_rotulo = 0;
// //     printf("Gerando");
// //     char* rotulo = (char*) malloc(sizeof(char) * 20);
// //     sprintf(rotulo, "L%d", contador_rotulo++);
// //     return rotulo;
// // }

// /* Função que gera um nome de temporário único */
// // char* gera_temporario() {
// //     static int contador_temporario = 0;
// //     printf("Gerando");
// //     char* temporario = (char*) malloc(sizeof(char) * 20);
// //     sprintf(temporario, "r%d", contador_temporario++);
// //     return temporario;
// // }

// char* gera_rotulo() {
//     static int contador_rotulo = 0;
//     static char rotulo[20];
//     sprintf(rotulo, "r%d", contador_rotulo++);
//     return rotulo;
// }

// char* gera_temporario() {
//     static int contador_temporario = 0;
//     static char temporario[20];
//     sprintf(temporario, "r%d", contador_temporario++);
//     return temporario;
// }

// // void gera_codigo_expr(ILOCLISTSTRUCT ** iloclist, int exprType)
// // {   ILOCSTRUCT *iloc = (ILOCSTRUCT*)malloc(sizeof(ILOCSTRUCT));

// //     switch (exprType)
// //     {
// //     case ADD:
// //         iloc->end1 = cria_registrador();
// //         iloc->end2 = cria_registrador();
// //         iloc->end3 = cria_registrador();
// //         strcpy(iloc->instrucao, "add");
// //         break;
    
// //     default:
// //         break;
// //     }
// // }



// // adiciona uma operação à lista de operações ILOC
// void add_operation(ILOCLISTSTRUCT** list, ILOCSTRUCT* operation) {
//     ILOCLISTSTRUCT* new_item = (ILOCLISTSTRUCT*) malloc(sizeof(ILOCLISTSTRUCT));
//     new_item->instrucao = operation;
//     new_item->next = NULL;

//     if (*list == NULL) {
//         // lista vazia, o novo item é o primeiro
//         *list = new_item;
//     } else {
//         // adiciona o novo item ao final da lista
//         ILOCLISTSTRUCT* last_item = *list;
//         while (last_item->next != NULL) {
//             last_item = last_item->next;
//         }
//         last_item->next = new_item;
//     }
// }


// void remove_operation(ILOCLISTSTRUCT** list, char* label) {
//     if (*list == NULL) {
//         // lista vazia, não há nada a remover
//         return;
//     }

//     // verifica se o primeiro item tem o rótulo fornecido
//     if ((*list)->instrucao->rotulo1 != NULL && strcmp((*list)->instrucao->rotulo1, label) == 0) {
//         ILOCLISTSTRUCT* item_to_remove = *list;
//         *list = (*list)->next;
//         free(item_to_remove->instrucao);
//         free(item_to_remove);
//         return;
//     }

//     // procura o item com o rótulo fornecido na lista
//     ILOCLISTSTRUCT* prev_item = *list;
//     ILOCLISTSTRUCT* current_item = prev_item->next;
//     while (current_item != NULL) {
//         if (current_item->instrucao->rotulo1 != NULL && strcmp(current_item->instrucao->rotulo1, label) == 0) {
//             prev_item->next = current_item->next;
//             free(current_item->instrucao);
//             free(current_item);
//             return;
//         }
//         prev_item = current_item;
//         current_item = current_item->next;
//     }
// }


// // // retorna o próximo número de rótulo disponível
// // int next_label(int label) {
// //     return label++;
// // }

// // // retorna o próximo número de temporário disponível
// // int next_temp(int temp) {
// //     return temp++;
// // }

// // // retorna uma string contendo o próximo rótulo disponível
// // char* new_label(int label) {
// //     char* label = (char*) malloc(sizeof(char) * 10);
// //     sprintf(label, "L%d", next_label(label));
// //     return label;
// // }

// // // retorna uma string contendo o próximo temporário disponível
// // char* new_temp(int temp) {
// //     char* temp = (char*) malloc(sizeof(char) * 10);
// //     sprintf(temp, "r%d", next_temp(temp));
// //     return temp;
// // }


// // /* Função que gera um rótulo único */
// // char* gera_rotulo() {
// //     static int contador_rotulo = 0;
// //     char* rotulo = (char*) malloc(sizeof(char) * 20);
// //     sprintf(rotulo, "L%d", contador_rotulo++);
// //     return rotulo;
// // }

// // /* Função que gera um nome de temporário único */
// // char* gera_temporario() {
// //     static int contador_temporario = 0;
// //     char* temporario = (char*) malloc(sizeof(char) * 20);
// //     sprintf(temporario, "r%d", contador_temporario++);
// //     return temporario;
// // }





// //////////////////////

// // // Gera o código ILOC para a operação lógica NOT (!)
// // void gera_codigo_not(ast* no) {
// //     int reg = get_novo_registro();
// //     int label_fim = get_novo_label();
// //     int label_nao = get_novo_label();
    
// //     // Gera o código ILOC para testar se a expressão é falsa
// //     gera_codigo_operando(no->filho[0], reg);
// //     printf("cbr r%d -> L%d, L%d\n", reg, label_nao, label_fim);
    
// //     // Gera o código ILOC para o caso em que a expressão é verdadeira
// //     printf("L%d:\n", label_nao);
// //     printf("loadI 1 => r%d\n", reg);
// //     printf("jumpI L%d\n", label_fim);
    
// //     // Gera o código ILOC para o caso em que a expressão é falsa
// //     printf("L%d:\n", label_fim);
// //     printf("loadI 0 => r%d\n", reg);
    
// //     // Define o novo registro criado para esse nó da árvore
// //     no->registro = reg;
// // }

// // // Gera o código ILOC para a operação aritmética unária de negação (-)
// // void gera_codigo_neg(ast* no) {
// //     int reg = get_novo_registro();
    
// //     // Gera o código ILOC para avaliar a expressão e armazenar seu valor em reg
// //     gera_codigo_operando(no->filho[0], reg);
    
// //     // Gera o código ILOC para a operação de negação
// //     printf("multI r%d => -1 -> r%d\n", reg, reg);
    
// //     // Define o novo registro criado para esse nó da árvore
// //     no->registro = reg;
// // }


// // Gera o código ILOC para a operação lógica NOT (!)
// void gera_codigo_not() {
//     printf("Antes dos cria");
//     char* reg = gera_temporario();
//     char* label_fim = gera_rotulo();
//     char* label_nao = gera_rotulo();
//     printf("Depois dos cria");
//     // Gera o código ILOC para testar se a expressão é falsa
//     // gera_codigo_operando(no->filho[0], reg);
//     printf("cbr r%s -> L%s, L%s\n", reg, label_nao, label_fim);
    
//     // Gera o código ILOC para o caso em que a expressão é verdadeira
//     printf("L%s:\n", label_nao);
//     printf("loadI 1 => r%s\n", reg);
//     printf("jumpI L%s\n", label_fim);
    
//     // Gera o código ILOC para o caso em que a expressão é falsa
//     printf("L%s:\n", label_fim);
//     printf("loadI 0 => r%s\n", reg);
    
//     // Define o novo registro criado para esse nó da árvore
// }




//GP