#include <stdio.h>

/*
Faça um programa que leia um vetor A[100]. No final, mostre todas as posições do vetor que armazenam um valor menor ou igual a 10 e o valor armazenado em cada uma das posições.
*/

int main(){
    int i;
    float A[100];

    for(i=0;i<100;i++){
        scanf("%f", &A[i]);
    }

    for(i=0;i<100;i++){
        if(A[i] <= 10){
            printf("A[%d] = %.1f\n", i, A[i]);
        }
    }

    
    return 0;
}