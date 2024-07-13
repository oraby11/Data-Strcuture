#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include "Global.h"
#define  MAX 1000

int DeleteNode(list *pl,int value)
{
    if (pl->head == NULL)
        return -1;


    node_type *current = pl->head;
    node_type *previous = NULL;

    int pos = 1;
    while (current != NULL)
        {
        if (current->info == value) {
            if (previous == NULL) {
                pl->head = current->next;
            } else {
                previous->next = current->next;
            }
            free(current);
            pl->size--;
            return pos;
        }


        previous = current;
        current = current->next;
        pos++;
    }

    return -1;

}

/*****************************************************************/
int Sum(node_type *head)
{

    int sum = 0;
    node_type *current = head;

    while (current != NULL)
        {

        sum += current->info;
        current = current->next;

       }

    return sum;
}

/*************************************************************/

int Max(node_type *head )
{
    node_type *q=head->next;

    int max=head->info;

    for (int i=0; q->next !='/0' ; i++)
    {
        if (q->info > max )
        {
            max=q->info;
        }
        else
        {
             q=q->next;
        }
    }

    return max;

}

/*********************************************/


int MiddleLinked (node_type *head)
{

    if (head == NULL)
        return -1;

    node_type *slow = head;
    node_type *fast = head;

    while (fast != NULL && fast->next != NULL)
        {
        slow = slow->next;
        fast = fast->next->next;
        }

    return slow->info;
}



/***************************************************/


void PrintList(list *pl) {
    node_type *current = pl->head;
    while (current != NULL) {
        printf("%d -> ", current->info);
        current = current->next;
    }
    printf("NULL\n");
}


/******************************************/

void Reverse(list *pl)
{

    node_type *prev = NULL;
    node_type *current = pl->head;
    node_type *next = NULL;

    while (current != NULL) {
        next = current->next;   // Save next node
        current->next = prev;   // Reverse current node's pointer
        prev = current;         // Move pointers one position ahead
        current = next;
    }

    pl->head = prev;


}
/****************************************/



int main()
{
      list *pl;
    Create_list(&pl);

    Insert_List(1, &pl, 5);
    Insert_List(2, &pl, 10);
    Insert_List(3, &pl, 15);
    Insert_List(4, &pl, 20);

    printf("Initial List:\n");
    PrintList(&pl);




    // Test deleting the first node
    DeleteNode(&pl, 5);
    printf("List after deleting first node (5):\n");
    PrintList(&pl);

    // Test deleting the last node
    DeleteNode(&pl, 20);
    printf("List after deleting last node (20):\n");
    PrintList(&pl);

    // Test deleting a node in between nodes
    DeleteNode(&pl, 10);
    printf("List after deleting node (10) in between nodes:\n");
    PrintList(&pl);

    // Test deleting a node not found in the list
    int result = DeleteNode(&pl, 50);
    if (result == -1) {
        printf("Node with value 50 not found in the list.\n");
    }


    printf("Sum of Linked List is %d \n", Sum(&pl));
    printf("Max of Linked List is %d \n", Max(&pl));
    printf("Middle of Linked List is %d \n", MiddleLinked(&pl));

    Reverse(&pl);

    printf("Reversed List:\n");
    PrintList(&pl);





    return 0;
}





