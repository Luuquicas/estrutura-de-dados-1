#include <stdio.h>

/*
Leia um valor X. Coloque este valor na primeira posição de um vetor N[100]. Em cada posição subsequente de N (1 até 99), coloque a metade do valor armazenado na posição anterior, conforme o exemplo abaixo. Imprima o vetor N.
*/

int main(){
    int i;
    double X,N[100];
    
    scanf("%lf", &N[0]);
    
    for(i=1;i<100;i++){
        N[i]=N[i-1]/2;
    }
    for(i=0;i<100;i++){
        printf("N[%d] = %.4lf\n", i, N[i]);
    }
    return 0;
}