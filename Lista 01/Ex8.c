#include <stdio.h>

/*
Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores forem pares ou ímpares. Só que o tamanho de cada um dos dois vetores é de 5 posições. Então, cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem lidos. Terminada a leitura, deve-se imprimir o conteúdo que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor impar. Cada vetor pode ser preenchido tantas vezes quantas for necessário.
*/

int main(){
    int impar[5], par[5];
    int qp = 0, qi = 0;
    int x;
    int i, j;

    for(i=0;i<15;i++){
        scanf("%d", &x);
        if(x%2 == 0){
            par[qp]=x;
            qp++;
            if(qp == 5){
                for(j=0;j<5;j++){
                    printf("par[%d] = %d\n", j, par[j]);
                }
                qp=0;
            }
        }else{
            impar[qi]=x;
            qi++;
            if(qi == 5){
                for(j=0;j<5;j++){
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                qi=0;
            }
        }
    }
    for(j=0;j<qi;j++){
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    for(j=0;j<qp;j++){
        printf("par[%d] = %d\n", j, par[j]);
    }

    
    return 0;
}