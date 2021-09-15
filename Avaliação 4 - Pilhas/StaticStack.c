#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>
#define MAX 10

struct stack{
  int index;
  int data[MAX];
};

Stack* Stack_create(){
  Stack* nova = malloc(sizeof(Stack));
  if(nova){
    nova->index = -1;
  } return nova;
}
int Stack_push(Stack* stack, int info){
  if (!Stack_full(stack)){
    stack->index++;
    stack->data[stack->index] = info;
    return 1;
  } return 0; //overflow
}

int Stack_pop(Stack* stack, int* info){
  if(!Stack_empty(stack)){
    *info = stack->data[stack->index];
    stack->index--;
    return 1;
  } return 0; //underflow
}
int Stack_head(Stack* stack, int* info){
  if(!Stack_empty(stack)){
    *info = stack->data[stack->index];
    return 1;
  } return 0;
}
void Stack_destroy(Stack* stack){
  free(stack);
}
int Stack_full(Stack* stack){
  return stack->index==MAX-1;
}

int Stack_empty(Stack* stack){
  return stack->index == -1;
}

int Stack_qty(Stack* stack){
  return stack->index+1;
}

void Exchange_step(Stack* S1, Stack* S2, int valor){
    int aux,drawn;
    do{
        Stack_head(S1, &aux);
        if(aux > valor)
            Stack_push(S2, aux);
        Stack_pop(S1, &drawn);
        printf("%d,", drawn);
    }while(aux > valor && aux > 1);
    if(aux == 1)
        printf("underflow");
    putchar('\n');
    do{
        Stack_head(S2, &aux);
        Stack_push(S1, aux);
        Stack_pop(S2, &drawn);
    }while(!Stack_empty(S2));
}
