#include <stdio.h>
#include <stdlib.h>

#include "stack.h"


int Parentheses(char *expression) {
    stack s;

    CreateStack(&s);
    for (int i = 0; i < (expression)!='/0'; i++) {

        char index=expression[i];

        if(index=='[' || index=='(' || index=='{')
        {
            Push(index,&s);

        }
        else if (index==']' || index== ')' || index=='}')
        {
            if (StackEmpty(&s))
            {
                return 0;
            }
           char temp= Pop(&s);

           if ((index==')' && temp !='(') ||
               (index=='}' && temp !='}')  ||
                (index=='[' && temp !=']'))

           {
               return 0;
           }

        }
     }

      return (StackEmpty(&s));

}
/***********************************************************/
int main()
{

    char exp[MAX];

    printf("Enter the string %s \n");

    scanf("%s",&exp);

    if (Parentheses(exp))
    {
        printf("Valid");
    }
    else
    {
        printf("Not Valid");
    }



    return 0;
}
