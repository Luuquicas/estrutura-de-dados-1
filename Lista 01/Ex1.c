#include <stdio.h>

/*
Faça um programa que leia um vetor X[10]. Substitua a seguir, todos os valores nulos e negativos do vetor X por 1. Em seguida mostre o vetor X.
*/

int main(){
    int X[10], i;

    for(i=0;i<10;i++){
        scanf("%d", &X[i]);
        if(X[i] <= 0){
            X[i] = 1;
        }
    }

    for(i=0;i<10;i++){
        printf("X[%d] = %d\n", i, X[i]);
    }

    return 0;
}