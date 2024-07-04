#include <stdlib.h>
#include <stdio.h>
#include "Linked_queue.h"
#include "Global.h"
void Create_queue(queue *pq)
{
    pq->front=NULL;
    pq->rear=NULL;
    pq->size=0;

}
/*********************************************/
void Append(Queue_Entry item,queue *pq)
{
      queueNode* pn= (queueNode*)malloc(sizeof(queueNode));      //Store new element in memeory
      pn->next=NULL;           // make pn refer to last element in Queue
      pn->Entry=item;          //Access value of element in Queue

      if(!pq->rear)        //Check if queue empty
      {
          pq->front=pn;
      }
      else
      {
          pq->rear->next=pn;
      }
      pq->rear=pn;

      pq->size++;              // size increment +1


}

/******************************************/
void Serve (Queue_Entry *pe,queue *pq)
{

    queueNode *pn= pq->front;
    *pe=pn->Entry;

    pq->front=pn->next;
    free(pn);

    if(!pq->front)
    {
        pq->rear=NULL;
    }

    pq->size--;

}
/*********************************************/
int is_queue_empty(queue *pq)
{

    return !pq->front;
}
/*******************************************/
int is_queue_full(queue *pq)
{
    return   0;
}
/****************************************/
int size_queue(queue *pq)
{
    return  pq->size;
}
/*************************************/

void clearQueue(queue *pq)
{

    while(pq->front)
    {
        pq->rear=pq->front->next;
        free(pq->front);
        pq->front=pq->rear;

    }

    pq->size;

}
