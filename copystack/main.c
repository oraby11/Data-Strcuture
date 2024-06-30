#include <stdio.h>
#include <stdlib.h>
#include "stack1.h"

void CopyStack(stack *first, stack *second)     //impelement function to copy stack
{
    first->top = second->top;                 // make two stack same length

    for(int i=0 ; first->top ; i++)
    {
        second->entry[i] = first->entry[i];       //make two stack same element
    }
}
/*****************************************/
void Display(stack *ps)     // function to print stack
{
    for(int i=0 ; i <ps->top ; i++)       // looping for element stack
    {
        printf("%d\n",ps->entry[i]);
    }
}
/*************************************/

int main()
{
    stack s1,s2;          // store two stack in memory

    CreateStack(&s1);
    CreateStack(&s2);

    Push(5,&s1);            // add some element in stack
    Push(4,&s1);
    Push(3,&s1);
    Push(2,&s1);
    Push(1,&s1);

    Display(&s1);       //print first stack

    CopyStack(&s1,&s2);   //function to copy stack

    Display(&s2);         //print second stack


    return 0;
}
