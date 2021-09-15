#ifndef CIRCULAR_LIST_H
#define CIRCULAR_LIST_H

typedef struct no{
    int valor;
    struct no *proximo;
}No; 

typedef struct{
    No *inicio;
    No *fim;
    int tam;
}Lista;

void criaLista(Lista *lista);
void inserirFim(Lista *lista, int num);
void buscaNo(Lista *lista, int m);

#endif