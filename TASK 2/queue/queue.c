#include <stdio.h>
#include <conio.h>
#include "queue.h"

void create_queue(queue_type *pq)
{
    pq->front=0;
    pq->rear=-1;
    pq->size=0;

}

/**********************************************/
int is_queue_empty(queue_type *pq)
{
    return (pq->size==0);
}

/***************************************/

int is_queue_full(queue_type *pq)
{
    return (pq->size==MAX);
}

/********************************************/
void enqueue(entry_type element , queue_type *pq)
{
    pq->rear= (pq->rear+1)% MAX;
    pq->entry[pq->rear]=element;
    pq->size++;
}
/****************************************/
void dequeue(entry_type *element , queue_type *pq)
{
    *element = pq->entry[pq->front];
    pq->front=(pq->front+1) % MAX;
    pq->size--;

}
/*****************************************/
void TraverseQueue(queue_type *pq, void (*pf) (entry_type))
{
    int position ,s ;

    for (position=pq->front,s=0; s<pq->size; s++)
    {
        (pf) (pq->entry[position]);
    }

}
/**********************************************/
int size_queue(queue_type *pq)
{
    return pq->size;
}

/*******************************************/
void clearQueue(queue_type *pq)
{
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
}
/****************************************/

