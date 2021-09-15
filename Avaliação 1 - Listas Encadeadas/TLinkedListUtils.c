#include "TLinkedListUtils.h"
#include "TLinkedList.h"

#include<stdio.h>

int findLoop(TNo *slow, TLinkedList *list)
{
  TNo *aux = TLinkedList_getInicio(list);
  while (slow != aux)
  {
    aux = aux->prox;
    slow = slow->prox;
  }
  if (aux->info)
    return aux->info;
}

int TLinkedList_hasLoop(TLinkedList *list)
{
  TNo *fast = TLinkedList_getInicio(list);
  TNo *slow = TLinkedList_getInicio(list);
  while (fast != NULL && fast->prox != NULL)
  {
    fast = fast->prox->prox;
    slow = slow->prox;
    if (slow == fast)
      return findLoop(slow, list);
  }
  return 0;
}
