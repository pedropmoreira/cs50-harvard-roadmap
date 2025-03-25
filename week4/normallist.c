#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;

} node;

int main(void)
{
    // creating the list (the pointer that will point to the first number in the linked list )
    node *list = NULL;

    for (int i = 0; i < 3; i ++)
    {
        node *n = malloc(sizeof(node));
        if(!n)
        {
            return 1;
        }
        n->number = get_int("Number: ");
        n->next = NULL;
        // if list is NULL - store de adress value of the "n" created .( empty )
        if (list == NULL)
        {
            list = n;
        }
        // if is not empty
        else
        {
            for (node *ptr = list; ptr != NULL ; ptr = ptr->next)
            {
                // if at end of list
                if (ptr->next == NULL)
                {
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }
}
