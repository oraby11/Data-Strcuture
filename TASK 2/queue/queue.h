#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include "Global.h"
#define MAX 100


typedef struct {
 int front ;
 int rear;
 int size;
 entry_type entry[MAX]

} queue_type;

void create_queue(queue_type *);

int is_queue_empty(queue_type *);

int is_queue_full(queue_type *);

void enqueue(entry_type element , queue_type *pq);

void dequeue(entry_type *element , queue_type *pq);

void TraverseQueue(queue_type *pq, void (*pf) (entry_type));

int size_queue(queue_type *);

void clearQueue(queue_type *);




#endif // QUEUE_H_INCLUDED
