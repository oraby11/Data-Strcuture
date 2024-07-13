 #include <stdio.h>
#include "stack.h"

/************************************/
//Accessing mechanism
void CreateStack(stack *ps )
{
    ps->top=0;

}
/***********************************/
void Push(stack_Entry item, stack *ps)
{
    ps->entry[ps->top]=item;
    ps->top++;
}
/***********************************/
int StackFull(stack *ps)
{
   /* if  (ps->top==10)
        return 1;
    else
        return 0;*/
    return ps->top==MAX;
}
/************************************/
char  Pop(stack *s)
{
   return  s->entry[(s->top)--];

}
/***********************************/
int StackEmpty(stack *ps)
{
    return !ps->top;
}

/***********************************/
void stackTop(stack_Entry *pe,stack *ps)
{
   *pe=ps->entry[ps->top-1];
}
/************************************/
int StackSize(stack *ps)
{
    return ps->top;
}
/**************************************/
void ClearStack(stack *ps)
{
    ps->top=0;
}
/************************************/
void TraverseStack(stack *ps,void (*Pointer_to_function)(stack_Entry))
{
    int i;
    for( i=ps->top; i>0;i--)
        {
            (*Pointer_to_function)(ps->entry[i-1]);
        }


}
