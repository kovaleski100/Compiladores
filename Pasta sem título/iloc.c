#include "iloc.h"
#include <stdio.h>
#include <stdlib.h>
#include "backpatch.h"
int rbss = 0;
int rfp = 0;

int get_rbss() {
  return rbss;
}

int get_rfp() {
  return rfp;
}

void increase_rbss(int size) {
  rbss += size;
}

void increase_rfp(int size) {
  rfp += size;
}

char* new_register() {
  static int registerValue = 0;
  char *newRegister = malloc(sizeof(char) * MAX_SIZE);
  snprintf(newRegister, MAX_SIZE, "r%d", registerValue++);
  return newRegister;
}

char* new_label() {
  static int LabelValue = 0;
  char *newLabel = malloc(sizeof(char) * MAX_SIZE);
  snprintf(newLabel, MAX_SIZE, "L%d", LabelValue++);
  return newLabel;
}

OPERATION* new_operation(int opcode, char *arg1, char *arg2, char *arg3, int argI) {
  OPERATION* new_op = malloc(sizeof(OPERATION));
  new_op->opcode = opcode;
  new_op->arg1 = arg1;
  new_op->arg2 = arg2;
  new_op->arg3 = arg3;
  new_op->argI = argI;
  return new_op;
}

void print_opcode(OPERATION* op) {
  switch (op->opcode) {
    case OP_NOP:
      printf("%s:\n",op->arg1);
      printf("nop\n");
      break;
    case OP_ADD:
      printf("add %s, %s => %s\n", op->arg1, op->arg2, op->arg3);
      break;
    case OP_SUB:
      printf("sub %s, %s => %s\n", op->arg1, op->arg2, op->arg3);
      break;
    case OP_MULT:
      printf("mult %s, %s => %s\n", op->arg1, op->arg2, op->arg3);
      break;
    case OP_DIV:
      printf("div %s, %s => %s\n", op->arg1, op->arg2, op->arg3);
      break;
    case OP_ADDI:
      printf("addI %s, %d => %s\n", op->arg1, op->argI, op->arg2);
      break;
    case OP_SUBI:
      printf("subI %s, %d => %s\n", op->arg1, op->argI, op->arg2);
      break;
    case OP_RSUBI:
      printf("rsubI %s, %d => %s\n", op->arg1, op->argI, op->arg2);
      break;
    case OP_MULTI:
      printf("multI %s, %d => %s\n", op->arg1, op->argI, op->arg2);
      break;
    case OP_DIVI:
      printf("divI %s, %d => %s\n", op->arg1, op->argI, op->arg2);
      break;
    case OP_RDIVI:
      printf("rdivI %s, %d => %s\n", op->arg1, op->argI, op->arg2);
      break;
    case OP_LSHIFT:
      printf("lshift %s, %s => %s\n", op->arg1, op->arg2, op->arg3);
      break;
    case OP_LSHIFTI:
      printf("lshiftI %s, %d => %s\n", op->arg1, op->argI, op->arg2);
      break;
    case OP_RSHIFT:
      printf("rshift %s, %s => %s\n", op->arg1, op->arg2, op->arg3);
      break;
    case OP_RSHIFTI:
      printf("rshiftI %s, %d => %s\n", op->arg1, op->argI, op->arg2);
      break;
    case OP_AND:
      printf("and %s, %s => %s\n", op->arg1, op->arg2, op->arg3);
      break;
    case OP_ANDI:
      printf("andI %s, %d => %s\n", op->arg1, op->argI, op->arg2);
      break;
    case OP_OR:
      printf("or %s, %s => %s\n", op->arg1, op->arg2, op->arg3);
      break;
    case OP_ORI:
      printf("orI %s, %d => %s\n", op->arg1, op->argI, op->arg2);
      break;
    case OP_XOR:
      printf("xor %s, %s => %s\n", op->arg1, op->arg2, op->arg3);
      break;
    case OP_XORI:
      printf("xorI %s, %d => %s\n", op->arg1, op->argI, op->arg2);
      break;
    case OP_LOADI:
      printf("loadI %d => %s\n", op->argI, op->arg1);
      break;
    case OP_LOAD:
      printf("load %s => %s\n", op->arg1, op->arg2);
      break;
    case OP_LOADAI:
      printf("loadAI %s, %d => %s\n", op->arg1, op->argI, op->arg2);
      break;
    case OP_LOADAO:
      printf("loadAO %s, %s => %s\n", op->arg1, op->arg2, op->arg3);
      break;
    case OP_STORE:
      printf("store %s => %s\n", op->arg1, op->arg2);
      break;
    case OP_STOREAI:
      printf("storeAI %s => %s, %d\n", op->arg1, op->arg2, op->argI);
      break;
    case OP_STOREAO:
      printf("storeAO %s => %s, %s\n", op->arg1, op->arg2, op->arg3);
      break;
    case OP_JUMPI:
      printf("jumpI -> %s\n", op->arg1);
      break;
    case OP_JUMP:
      printf("jump -> %s\n", op->arg1);
      break;
    case OP_CBR:
      printf("cbr %s -> %s, %s\n", op->arg1, op->arg2, op->arg3);
      break;
    case OP_CMP_LT:
      printf("cmp_LT %s, %s => %s\n", op->arg1, op->arg2, op->arg3);
      break;
    case OP_CMP_LE:
      printf("cmp_LE %s, %s => %s\n", op->arg1, op->arg2, op->arg3);
      break;
    case OP_CMP_EQ:
      printf("cmp_EQ %s, %s => %s\n", op->arg1, op->arg2, op->arg3);
      break;
    case OP_CMP_GE:
      printf("cmp_GE %s, %s => %s\n", op->arg1, op->arg2, op->arg3);
      break;
    case OP_CMP_GT:
      printf("cmp_GT %s, %s => %s\n", op->arg1, op->arg2, op->arg3);
      break;
    case OP_CMP_NE:
      printf("cmp_NE %s, %s => %s\n", op->arg1, op->arg2, op->arg3);
      break;
    default:
      printf("ERROR\n");
  }
}
