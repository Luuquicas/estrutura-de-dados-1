#include<stdio.h>

//Redefinindo nome do tipo No
typedef struct no No;

//Criando No da lista
struct no
{
    int num;
    struct no *prox;
};

//Cria um novo no na lista
No *criar_no(){
    No *novo = (No*)malloc(sizeof(No));
    return novo;
}

//Insere o 'no' no inicio da lista
No* inserir_no_inicio(No* lista, int dado){
    No *novo_no=criar_no();
    novo_no->num=dado;

    if(lista == NULL){
        lista=novo_no;
        novo_no->prox=NULL;
    }else{
        novo_no->prox=lista;
        lista=novo_no;
    }

    return lista;
}

//Imprime a lista com uma variavel auxiliar
void imprimir_lista(No* lista){
    No *aux=lista;

    while(aux != NULL){
        printf("%d ", aux->num);
        aux=aux->prox;
    }
}

int main(){
    No *lista= NULL;

    lista=inserir_no_inicio(lista,10);
    lista=inserir_no_inicio(lista,20);
    lista=inserir_no_inicio(lista,30);
    lista=inserir_no_inicio(lista,40);

    imprimir_lista(lista);

    return 0;
}