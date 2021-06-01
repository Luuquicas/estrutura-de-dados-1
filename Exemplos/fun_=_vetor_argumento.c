#include <stdio.h>
#include <stdlib.h>

void ordemCrescente(int vetor[], int n){
    int i,j,temp;

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(vetor[i] > vetor[j]){
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

int main(){

    int vetor[10] = {10 , 24 , 20 , 16 , 22 , 9 , 11 , 15 , 21 , 30};
    int i;

    ordemCrescente(vetor, 10);
    
    for(i=0;i<10;i++){
        printf("%i\n", vetor[i]);
    }

}