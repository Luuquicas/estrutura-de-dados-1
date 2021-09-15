#include "Queue.h"
#include <stdlib.h>

typedef struct no{
  PixED info;
  struct no* prox;
}TNo;

TNo* TNo_createNFill(PixED info){
  TNo* novo = malloc(sizeof(TNo));
  if(novo){
    novo->info = info;
    novo->prox = novo;
  }return novo;
}

struct queue{
  TNo* end;
  int qty;
};

Queue* Queue_create(){
  Queue* nova = malloc(sizeof(Queue));
  if(nova){
    nova->end = NULL;
    nova->qty = 0;
  }
  return nova;
}
void Queue_destroy(Queue* fila){
  if(!Queue_empty(fila)){
    TNo *aux, *aux2;
    aux2 = fila->end->prox;
    while(aux2){
      aux = aux2->prox;
      free(aux2);
      aux2 = aux;
    }
  }
}

int Queue_enqueue(Queue* fila, PixED info){
  TNo* novo = TNo_createNFill(info);
  if(!novo) return 0;
  if(fila->end == NULL)
    fila->end = novo;
  else{
      novo->prox = fila->end->prox;
      fila->end->prox = novo;
      fila->end = novo;
  } 
  fila->qty++;
  return 1;
}
int Queue_dequeue(Queue* fila, PixED* info){
  if(Queue_empty(fila)) return 0;
  TNo* oldBegin = fila->end->prox;
  *info = oldBegin->info;
  fila->end->prox = oldBegin->prox;
  free(oldBegin);
  fila->qty--;
  if(fila->qty==0)
    fila->end = NULL;
  return 1;
}

int Queue_head(Queue* fila, PixED* info){
  if(Queue_empty(fila)) return 0;
  TNo* oldBegin = fila->end->prox;
  *info = oldBegin->info;
  return 1;
}

int Queue_full(Queue* fila, int tam){
  if(fila->qty == tam)
    return 1;
  else
    return 0;
}
int Queue_empty(Queue* fila){
  return fila->end == NULL;
}
int Queue_qty(Queue* fila){
  return (int)fila->qty;
}