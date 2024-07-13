#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MAX 100

typedef int stack_Entry ;

typedef struct stack    //Strcuture of stack
{
    stack_Entry   entry[MAX];
    int    top;
}stack;


void CreateStack(stack *ps );
void Push(stack_Entry item, stack *ps);
int StackFull(stack *ps);
char Pop(stack *ps);
int StackEmpty(stack *ps);
void stackTop(int *pe,stack *ps);
void ClearStack(stack *ps);
int StackSize(stack *ps);
void TraverseStack(stack *ps,void (*Pointer_to_function)(int ));



#endif // STACK_H_INCLUDED
