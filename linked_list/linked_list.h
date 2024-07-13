#ifndef LINKED_LIST_H_INCLUDED
#define LINKED_LIST_H_INCLUDED
#include "Global.h"

typedef struct ListNode
{
    int  info;

    struct node *next ;
}node_type;

typedef struct list
{
    int size ;
    node_type *head;

}list;

void Create_list(list *pl);
int  listEmpty (list *pl);
int ListFull(list *pl);
int ListSize (list *pl);
void DestroyList(list *pl);
void TraverseList(list *pl,void (*pf)(entry_type));
void Insert_List(int pos,list *pl,int e);
  //void DeleteList(int position, entry_type *pe,list *pl);
void Retrieve_List(int position,list *pl,entry_type *pe);
void Replace_List(int position,list *pl,entry_type e);
void deleteAtPosition( int position,node_type* head);

#endif // LINKED_LIST_H_INCLUDED
