#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue Queue;

typedef struct pix{
  int id_orig, id_dest;
  float valor;
}PixED;

Queue* Queue_create();
void Queue_destroy(Queue*);
int Queue_enqueue(Queue*, PixED);
int Queue_dequeue(Queue*, PixED*);
int Queue_head(Queue*, PixED*);

int Queue_full(Queue*, int);
int Queue_empty(Queue*);
int Queue_qty(Queue*);

#endif