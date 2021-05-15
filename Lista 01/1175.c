#include <stdio.h>

/*
Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor modificado.
*/

int main(){
    int N[20],i;

    for(i=19;i>=0;i--){
        scanf("%d", &N[i]);
    }
    for(i=0;i<20;i++){
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}