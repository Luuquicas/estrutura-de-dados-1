#include<stdio.h>
#include "Queue.h"

int main(){
  Queue* f1 = Queue_create();
  PixED temp;
  int tam;
  scanf("%d",&tam);
  do{
    scanf("%d %d %f", &temp.id_orig, &temp.id_dest, &temp.valor);
    if(temp.id_orig!=0 && temp.id_dest!=0 && temp.valor!=0.0)
      Queue_enqueue(f1, temp);
    if(Queue_full(f1,tam)){
      PixED aux;
      while(Queue_dequeue(f1, &aux))
        printf("(%d, %d, %.2f),", aux.id_orig, aux.id_dest, aux.valor);
      putchar('\n');
    }
  }while(temp.id_orig!=0 && temp.id_dest!=0 && temp.valor!=0.0);
  if(!Queue_empty(f1)){
    PixED aux;
    while(Queue_dequeue(f1, &aux))
      printf("(%d, %d, %.2f),", aux.id_orig, aux.id_dest, aux.valor);
    putchar('\n');
  }
  Queue_destroy(f1);
  return 0;
}