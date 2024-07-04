#include <stdio.h>
#include <stdlib.h>
#include "linked_stack.h"

void CreateStack(stack *ps )
{
    ps->Top=NULL;     // NULL is defined in <stdlib.h>
    ps->size=0;
}


/****************************************/
void Push(stack_Entry item, stack *ps)
{
    StackNode *pn=(StackNode*) malloc(sizeof(StackNode));
    pn->Entry=item;
    pn->next=ps->Top;
    ps->Top=pn;
    ps->size++;
}
/*******************************************/
void Pop(int  *pe,stack *ps)
{
    StackNode *pn;

    *pe=ps->Top->Entry;
    //Store in pointer to can access
    pn=ps->Top;
    ps->Top=ps->Top->next;
     //Free from memeory
    free(pn);

    ps->size--;

}
/**********************************/
int stack_Empty(stack *ps)
{
    return ps->Top==NULL;
}
/*************************************/
int stack_Full(stack *ps)
{
    return  0;

}
/************************************/
void ClearStack(stack *ps)
{
    StackNode *pn=ps->Top;
    StackNode *qn=ps->Top;
    while(pn)
    {
         pn=pn->next;
         free(qn);
         qn=pn;
    }
    ps->Top=NULL;
    ps->size=0;
}
/**********************************/
void TraverseStack(stack *ps,void (*Pointer_to_function)(int ))
{
    StackNode  *pn=ps->Top;

    while(pn)
    {
        (*Pointer_to_function) (pn->Entry);
        pn=pn->next;
    }
}
/*************************************/
int StackSize(stack *ps)
{
    /*int size;
    StackNode *pn=ps->Top;
    for(size=0;pn;pn=pn->next)
    {
        size++;
    }*/
    return ps->size;
}
/***********************************/
