#ifndef LINKED_QUEUE_H_INCLUDED
#define LINKED_QUEUE_H_INCLUDED
#include "Global.h"

typedef int Queue_Entry;
typedef struct queueNode
{
    Queue_Entry  Entry ;
    struct queueNode *next;

}queueNode;

typedef struct queue
{
    queueNode *front ;
    queueNode *rear;
    int size;

}queue;


void create_queue(queue *);

int is_queue_empty(queue *);

int is_queue_full(queue *);

void Append(Queue_Entry item , queue *pq);

void Serve (Queue_Entry *pe,queue *pq);

void TraverseQueue(queue *pq, void (*pf) (entry_type));

int size_queue(queue *);

void clearQueue(queue *);




#endif // LINKED_QUEUE_H_INCLUDED
