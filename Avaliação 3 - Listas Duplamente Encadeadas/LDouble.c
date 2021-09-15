#include "LDouble.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct no{
  int info;
  struct no *prox, *ant;
};

struct no* TNo_createnfill(int info){
  struct no* novo = (struct no*) malloc(sizeof(struct no));
  if(novo){
    novo->info = info;
    novo->prox = NULL;
    novo->ant = NULL;
  }
  return novo;
}

struct double_linked{
  struct no *inicio;
  struct no *fim;
};

TDList* TDList_create(){
  TDList* nova = (TDList*) malloc(sizeof(TDList));
  if(nova){
    nova->inicio = NULL;
    nova->fim = NULL;
  }
  return nova;
}
void TDList_destroy(TDList* list){
  TNo* aux = list->inicio;
  while(aux){
    TNo* no = aux->prox;
    free(aux);
    aux = no;
  }
}

void TDList_print(TDList* list){
  if(list){
    struct no* aux = list->fim;
    while(aux){
      printf("%d", aux->info);
      aux = aux->ant;
    }
    puts("");
  }
}
//Veja no LDouble.h para verificar os tipos de retorno
TDList* TDList_generate(char* charNum){
  int i=0,len = strlen(charNum);
  TDList *num = TDList_create();
  while(i<(len-1)){
    TDList_insert(num, (int)charNum[i]-48);
    i++;
  }
  return num;
}
//Veja no LDouble.h para verificar os tipos de retorno
TDList* TDList_sum(TDList* l1, TDList* l2){
  TDList *l3 = TDList_create();
  TNo *a = l1->fim, *b = l2->fim;
  int carry = 0;
  while(a || b){
    if(a){
      carry += a->info;
      a = a->ant;
    }
    if(b){
      carry += b->info;
      b = b->ant;
    }
    int passCarry = carry/10;
    int left = carry%10;
    TDList_insert(l3, left);
    carry = passCarry;
  }
  if(carry != 0)
    TDList_insert(l3, carry);
  return l3;
}

int TDList_insert(TDList* list, int info){
  TNo *novo = TNo_createnfill(info);
  if(novo == NULL || list == NULL) return 0;
  if(list->inicio == NULL){
    list->inicio = novo;
    list->fim = novo;
  }else{
    novo->ant = list->fim;
    list->fim->prox = novo;
    list->fim = novo;
  }
  return 1;
}
