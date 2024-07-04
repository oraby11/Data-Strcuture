#include <stdio.h>
#include <stdlib.h>
#include "linked_stack.h"
int main()
{
    stack s;
    CreateStack(&s);
    Push(4,&s);
    printf("%d",s.size);
    return 0;
}
