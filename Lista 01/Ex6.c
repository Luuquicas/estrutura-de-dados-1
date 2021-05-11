#include <stdio.h>

/*
Faça um programa que leia um valor T e preencha um vetor N[1000] com a sequência de valores de 0 até T-1 repetidas vezes, conforme exemplo abaixo. Imprima o vetor N.
*/

int main(){

    int T,N[1000],i,x=0;

    scanf("%d", &T);
    for(i=0;i<1000;i++){
        printf("N[%d] = %d\n", i, x);
        x++;
        if(x == T){
            x=0;
        }
    }
    return 0;
}