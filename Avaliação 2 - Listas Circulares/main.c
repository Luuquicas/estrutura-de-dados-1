#include "CircularList.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtdT,qtd,i,j,num,cont=1;
    Lista lista;
    scanf("%d", &qtdT);
    for(i=0;i<qtdT;i++){
        criaLista(&lista);
        scanf("%d %d", &qtd, &num);
        cont=1;
        for(j=0;j<qtd;j++){
            inserirFim(&lista, cont);
            cont++;
        }
        buscaNo(&lista, num);
    }
    return 0;
}
