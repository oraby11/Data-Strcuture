#include <stdio.h>
#include "linked_list.h"
#include "Global.h"


void Create_list(list *pl)
{
    pl->head=NULL;
    pl->size=0;
}
/*******************************/
int  listEmpty (list *pl)
{
    return (pl->size==0);

}
/*****************************/
int ListFull(list *pl)
{
    return 0;
}
/*****************************************/
int ListSize (list *pl)
{
    return pl->size;
}
/**********************************/
void DestroyList(list *pl)
{
   node_type *q;
   while(pl->head)
   {
        q=pl->head->next;
        free(pl->head);
        pl->head=q;
   }
   pl->size=0;
}
/***********************************************/
/*
void TraverseList(list *pl,void (*pf) (entry_type))
{
    node_type *p=pl->head;
    while(p)
    {
        (*pf)(p->info);

       p=p->next;
    }

}
*/
/*************************************************/
void Insert_List(int position,list *pl,int  e)
{
    int i;
    node_type *q,*p;

    p=(node_type*)malloc(sizeof(node_type));
    p->info=e;
    p->next=NULL;

    if(position==0)
    {
        p->next=pl->head;
        pl->head=p;
    }
    else
    {
        for(q=pl->head,i=0;i<position-1;i++)
        {
            q=q->next;

        }
        p->next=q->next;
        q->next=p;
    }

       pl->size++;

}
/**********************************************/
/*
 void DeleteList(int position, entry_type *pe,list *pl)
 {
     int i;
     node_type *q,*temp;

     if(position==0)
     {
         *pe=pl->head->info;
         temp=pl->head->next;
         free(pl->head);
         pl->head=temp;
     }

     else
     {
         for(q=pl->head,i=0;i<position-1;i++)
         {
             q=q->next;

         }
         *pe=q->next->info;
         temp=q->next->next;
         free(q->next);
         q->next=temp;

     }

         pl->size--;

 }
 */
 /*********************************************************/
/*
void Retrieve_List(int position,list *pl,entry_type *pe)
{
    node_type *q;
    int i;

    for(q=pl->head,i=0;i<position;i++)
    {
        q=q->next;
    }

     *pe=q->info;

}
*/
/******************************************************/
/*
void Replace_List(int position,list *pl,entry_type e)
{

    node_type *q;
    int i;
    for(q=pl->head,i=0;i<position;i++)
    {
        q=q->next;
    }

    q->info=e;

}
*/
/**********************************************/

void deleteAtPosition(int position,node_type* head) {
    if (head == NULL) {
        printf("Linked list is already empty.\n");
        return;
    }
    node_type  *temp = head;
    node_type  *prev = NULL;
    if (position == 1) {
        head = temp->next;
        free(temp);
        return;
    }
    for (int i = 1; temp != NULL && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Invalid position.\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
}

