#include <stdio.h>
#include <stdlib.h>
#include "stack1.h"

int first_stack(stack *ps)   // function to return first element
{
    return ps->entry[0];

}
/*****************************************/
void destroy_stack(stack *ps)
{
   // ps->top=0;
   CreateStack(ps);
}
/*******************************************/


int main()
{
    stack s;                 //create stack
    CreateStack(&s);

    Push(5,&s);                // push some element in stack
    Push(4,&s);
    Push(3,&s);
    Push(2,&s);


    int first = first_stack(&s);          // variable to store renturn value of function
    printf("first element in the stack is %d \n",first);


    int size = StackSize(&s);             // Variable to store size of stack
    printf("size of the stack is %d \n",size);


    destroy_stack(&s);    // Clear stack

    int size2 = StackSize(&s);             // Variable to store size of stack
    printf("size of the stack is %d \n",size2);




    return 0;
}
