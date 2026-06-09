#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *partition(Node *head, int x)
{
    Node lessDummy, greaterDummy;

    Node *less = &lessDummy;
    Node *greater = &greaterDummy;

    less->next = NULL;
    greater->next = NULL;

    while (head)
    {
        if (head->data < x)
        {
            less->next = head;
            less = less->next;
        }
        else
        {
            greater->next = head;
            greater = greater->next;
        }

        head = head->next;
    }

    greater->next = NULL;
    less->next = greaterDummy.next;

    return lessDummy.next;
}