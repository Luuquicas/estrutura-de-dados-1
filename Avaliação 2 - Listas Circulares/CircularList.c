#include "CircularList.h"
#include <stdio.h>
#include <stdlib.h>


//Inicia a lista
void criaLista(Lista *lista){
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->tam = 0;
}

void inserirFim(Lista *lista, int num){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->valor = num;
        if(lista->inicio == NULL){
            lista->inicio = novo;
            lista->fim = novo;
            lista->fim->proximo = lista->inicio;
        }else{
            lista->fim->proximo = novo;
            lista->fim = novo;
            lista->fim->proximo = lista->inicio;
        }
        lista->tam++;
    }else{
        printf("Erro ao alocar memoria!!!\n");
    }
}

void buscaNo(Lista *lista, int m){
    No *del, *ant;
    int i;
    do{
        del = lista->inicio;
        ant = lista->inicio;
        for(i=0;i<m-1;i++){
            ant = del;
            del = del->proximo;
        }
        ant->proximo = del->proximo;
        free(del);
        lista->inicio = ant->proximo;
        lista->tam--;
    }while(lista->tam > 1);
    printf("%d\n", lista->inicio->valor);
}

