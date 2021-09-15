#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(){
    Stack *S1 = Stack_create(), *S2 = Stack_create();
    char op;
    int valor;
    scanf("%c %d",&op,&valor);
    do{
        switch(op){
            case 'i':
                if(!Stack_push(S1, valor))
                    puts("overflow");
            break;
            case 'r':
                Exchange_step(S1, S2, valor);
            break;
            default:
                return 0;
            break;
        }
        scanf(" %c %d",&op,&valor);
    }while(op != 0);
    Stack_destroy(S1);
    Stack_destroy(S2);
    return 0;
}