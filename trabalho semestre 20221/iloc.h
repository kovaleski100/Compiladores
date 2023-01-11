#ifndef ILOC_H
#define ILOC_H

#define MAX_SIZE 10

typedef struct OPERATION {
    int opcode;
    char* arg1;
    char* arg2;
    char* arg3;
    int argI;
} OPERATION;

int get_rbss();
int get_rfp();
void increase_rbss(int size);
void increase_rfp(int size);

char* new_register();
char* new_label();
OPERATION* new_operation(int opcode, char *arg1, char *arg2, char *arg3, int argI);
void print_opcode(OPERATION* op);

#define OP_NOP         	 	 0
#define OP_ADD         	 	 1
#define OP_SUB         	 	 2
#define OP_MULT        	 	 3
#define OP_DIV         	 	 4
#define OP_ADDI        	 	 5
#define OP_SUBI        	 	 6
#define OP_RSUBI       	 	 7
#define OP_MULTI       	 	 8
#define OP_DIVI        	 	 9
#define OP_RDIVI        	10
#define OP_LSHIFT       	11
#define OP_LSHIFTI      	12
#define OP_RSHIFT       	13
#define OP_RSHIFTI      	14
#define OP_AND          	15
#define OP_ANDI         	16
#define OP_OR           	17
#define OP_ORI          	18
#define OP_XOR          	19
#define OP_XORI         	20
#define OP_LOADI        	21
#define OP_LOAD         	22
#define OP_LOADAI       	23
#define OP_LOADAO       	24
#define OP_STORE        	28
#define OP_STOREAI      	29
#define OP_STOREAO      	30
#define OP_JUMPI        	38
#define OP_JUMP         	39
#define OP_CBR          	40
#define OP_CMP_LT       	41
#define OP_CMP_LE       	42
#define OP_CMP_EQ       	43
#define OP_CMP_GE       	44
#define OP_CMP_GT       	45
#define OP_CMP_NE       	46

#endif
