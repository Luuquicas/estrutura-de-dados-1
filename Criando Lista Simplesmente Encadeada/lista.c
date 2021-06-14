#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int x;
    struct celula *prox;
}cel;

int main(){
    int a;
    cel *ini, *fim, *ant;
    ini = (cel *)malloc(sizeof(cel));
    if(ini == NULL) return;

    fim=ini;
    while(1){
        scanf("%d", &fim->x);
        if(fim->x==0) break;
        fim->prox=(cel *)malloc(sizeof(cel));
        if(fim->prox==NULL) return;
        fim=fim->prox;
    }
    fim->prox=NULL;
    fim=ini;
    while(fim->prox!=NULL){
        printf("%d ", fim->x);
        fim=fim->prox;
    }
    printf("\nInforme o valor a ser excluido: ");
    scanf("%d", &a);
    if(ini->x==a){
        ant=ini;
        ini=ini->prox;
        free(ant);
    }else{
        fim=ini;
        while(fim->x!=a && fim->prox!=NULL){
            ant=fim;
            fim=fim->prox;
        }
        if(fim->x==a){
            ant->prox=fim->prox;
            free(fim);
        }else{
            printf("\nN existe na lista!");
        }
    }
    fim=ini;
    while(fim->prox!=NULL){
        printf("%d ", fim->x);
        fim=fim->prox;
    }
}