#include "erro.h"
#include "parser.tab.h"

void print_undeclared(valor_lexico *vl)
{
    printf("ERR_UNDECLARED na linha %d, variavel \'%s\' não declarada \n",vl->numero_linha, vl->valorToken);
}

void print_declared(CONTEUDO *conteudo, valor_lexico *vl)
{
    printf("ERR_DECLARED na linha %d, variavel \'%s\' já declarada na linha %d\n", vl->numero_linha, conteudo->nome, conteudo->linha);
    //printf("identificador %s já declarado na linha %d", vl->valorToken, vl->numero_linha);
}

void print_variable(CONTEUDO *conteudo, valor_lexico *vl)
{
    printf("ERR_VARIABLE na linha %d, variavel \'%s\' declarada na linha %d como variável \n", vl->numero_linha, conteudo->nome, conteudo->linha);
    //printf("identificador %s já declarado na linha %d", vl->valorToken, vl->numero_linha);
}

void print_array(CONTEUDO *conteudo, valor_lexico *vl)
{
    printf("ERR_ARRAY na linha %d, variavel \'%s\' declarada na linha %d como array \n", vl->numero_linha, conteudo->nome, conteudo->linha);
    //printf("identificador %s já declarado na linha %d", vl->valorToken, vl->numero_linha);
}


void print_function(CONTEUDO *conteudo, valor_lexico *vl)
{
    printf("ERR_FUNCTION na linha %d, variavel \'%s\' declarada na linha %d como funcao \n", vl->numero_linha, conteudo->nome, conteudo->linha);
    //printf("identificador %s já declarado na linha %d", vl->valorToken, vl->numero_linha);
}

void print_char_vector(valor_lexico *vl)
{
    printf("ERR_CHAR_VECTOR na linha %d, variavel \'%s\' é um arranjo de char e na nossa linguagem não é possivel array de char \n",vl->numero_linha, vl->valorToken);
}

void print_char_to_int(valor_lexico *vl)
{
    printf("ERR_CHAR_TO_INT na linha %d,  \n",vl->numero_linha);
}

void print_char_to_float(valor_lexico *vl)
{
    printf("ERR_CHAR_TO_FLOAT na linha %d,  \n",vl->numero_linha);
}

void print_char_to_bool(valor_lexico *vl)
{
    printf("ERR_CHAR_TO_BOOL na linha %d,  \n",vl->numero_linha);
}


void print_char_x_to_char(int numero_da_linha)
{
    printf("ERR_X_TO_CHAR na linha %d,  \n",numero_da_linha);
}

int define_tipo_expressao(int tipo_atual, int tipo_recebido, valor_lexico *vl) {
    if(tipo_atual == TK_PR_INT){
        if(tipo_recebido == TK_PR_INT){
          return TK_PR_INT;
        }
        if(tipo_recebido == TK_PR_BOOL){
          return TK_PR_INT;
        }
        if(tipo_recebido == TK_PR_FLOAT){
          return TK_PR_FLOAT;
        }
        if(tipo_recebido == TK_PR_CHAR){
          print_char_to_int(vl);
          exit(ERR_CHAR_TO_INT);
        }
    }
    if(tipo_atual == TK_PR_FLOAT){
        if(tipo_recebido == TK_PR_INT){
          return TK_PR_FLOAT;
        }
        if(tipo_recebido == TK_PR_BOOL){
          return TK_PR_FLOAT;
        }
        if(tipo_recebido == TK_PR_FLOAT){
          return TK_PR_FLOAT;
        }
        if(tipo_recebido == TK_PR_CHAR){
          print_char_to_float(vl);
          exit(ERR_CHAR_TO_FLOAT);
        }
    }

    if(tipo_atual == TK_PR_BOOL){
        if(tipo_recebido == TK_PR_INT){
          return TK_PR_INT;
        }
        if(tipo_recebido == TK_PR_BOOL){
          return TK_PR_BOOL;
        }
        if(tipo_recebido == TK_PR_FLOAT){
          return TK_PR_FLOAT;
        }
        if(tipo_recebido == TK_PR_CHAR){
          print_char_to_bool(vl);
          exit(ERR_CHAR_TO_BOOL);
        }
    }
    if(tipo_atual == TK_PR_CHAR){
        if(tipo_recebido == TK_PR_INT){
          print_char_to_int(vl);
          exit(ERR_CHAR_TO_INT);
        }
        if(tipo_recebido == TK_PR_BOOL){
          print_char_to_bool(vl);
          exit(ERR_CHAR_TO_BOOL);
        }
        if(tipo_recebido == TK_PR_FLOAT){
          print_char_to_float(vl);
          exit(ERR_CHAR_TO_FLOAT);
        }
        if(tipo_recebido == TK_PR_CHAR){
          return TK_PR_CHAR;
        }
    }
    return tipo_recebido;
}


int define_tipo_atribuicao(int variavel, int atribuicao, int numero_linha) {
    if(variavel == TK_PR_CHAR){
        if(atribuicao == TK_PR_INT || atribuicao == TK_PR_FLOAT || atribuicao == TK_PR_BOOL){
            print_char_x_to_char(numero_linha);
            exit(ERR_X_TO_CHAR);
        }
    }
    return 0;
}

// void print_identificar_erro(CONTEUDO *original, valor_lexico *erro, int natureza)
// {
//     char tipo[10];
//     int erro;
//     switch (original->natureza)
//     {
//     case arranjoN:
//         strcpy(tipo, natureza == variavel ? "variavel":"função");
//         erro = ERR_ARRAY;
//         break;
//     case variavel:
//         strcpy(tipo, natureza == arranjoN ? "arranjo":"função");
//         erro = ERR_VARIABLE;
//         break;
//     default:
//         strcpy(tipo, natureza == identificador ? "variavel":"arranjo");
//         erro = ERR_FUNCTION;
//         break;
//     }
//     //printf("identificador do tipo Arranjo usado como %s na linha %d", erro->tipo_token == identificador ? "variavel":"função" , line);
//     exit(erro);
// }

// void check_atribuicao(CONTEUDO *v1, CONTEUDO *v2)
// {
//     int erro = -1;
//     char tipo1[10];
//     char tipo2[10];
//     switch (v1->tipo)
//     {
//     case caracter:
//         strcpy(tipo1, "char");
//         switch (v2->tipo)
//         {
//         case inteiro:
//             strcpy(tipo2, "int");
//             erro = ERR_CHAR_TO_INT;
//             break;
//         case flutuante:
//             strcpy(tipo2, "float");
//             erro = ERR_CHAR_TO_FLOAT;
//             break;
//         default:
//             if(v2->literal.b == verdadeiro || v2->literal.b == falso)
//             {
//                 strcpy(tipo2, "bool");
//                 erro = ERR_CHAR_TO_BOOL;
//             }
//             break;
//         }
//         break;    
//     default:
//         strcpy(tipo1,v1->tipo_token == flutuante? "float" : v1->tipo_token == inteiro ? "int" : "bool");
//         switch (v2->tipo_token)
//         {
//         case caracter:
//             strcpy(tipo2, "char");
//             erro = ERR_X_TO_CHAR;
//             break;
//         }
//     if(erro != -1)
//     {
//         printf("variavel %s é do tipo %s não pode receber um tipo %s na linha %d", v1->valorToken, tipo1, tipo2, line);
//         exit(erro);
//     }
// }
// }