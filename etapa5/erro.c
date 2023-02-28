#include "erro.h"

void print_undeclared(valor_lexico *vl)
{
    printf("ERR_UNDECLARED na linha %d, variavel \'%s\' não declarada \n",vl->numero_linha, vl->valorToken);
}

void print_declared(CONTEUDO *conteudo, valor_lexico *vl)
{
    printf("ERR_DECLARED na linha %d, variavel \'%s\' já declarada na linha %d\n", vl->numero_linha, conteudo->nome, conteudo->linha);
    //printf("identificador %s já declarado na linha %d", vl->valorToken, vl->numero_linha);
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