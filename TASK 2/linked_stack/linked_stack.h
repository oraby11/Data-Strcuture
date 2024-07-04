#ifndef LINKED_STACK_H_INCLUDED
#define LINKED_STACK_H_INCLUDED

typedef int stack_Entry;

typedef struct StackNode
{
    stack_Entry  Entry;
    struct StackNode *next;
}StackNode;

typedef struct stack
{
      StackNode  *Top;
      int size;
}stack ;



void CreateStack(stack *ps );
void Push(stack_Entry item, stack *ps);
int StackFull(stack *ps);
void Pop(int  *pe,stack *ps);
int StackEmpty(stack *ps);
void stackTop(int *pe,stack *ps);
void ClearStack(stack *ps);
int StackSize(stack *ps);
void TraverseStack(stack *ps,void (*Pointer_to_function)(int ));


#endif // LINKED_STACK_H_INCLUDED
