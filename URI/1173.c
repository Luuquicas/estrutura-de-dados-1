#include <stdio.h>

/*
Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10]. Em cada posição subsequente, coloque o dobro do valor da posição anterior. Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor em seguida.
*/

int main(){

    int N[10],i;

    scanf("%d", &N[0]);
    for(i=1;i<10;i++){
        N[i] = N[i-1]*2;
    }

    for(i=0;i<10;i++){
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}