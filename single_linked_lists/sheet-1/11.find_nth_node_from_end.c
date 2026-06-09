#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int nthFromEnd(Node *head, int n)
{
    Node *first = head;
    Node *second = head;

    for (int i = 0; i < n; i++)
    {
        if (first == NULL)
            return -1;

        first = first->next;
    }

    while (first)
    {
        first = first->next;
        second = second->next;
    }

    return second->data;
}