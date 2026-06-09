#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *merge(Node *a, Node *b)
{
    if (a == NULL)
        return b;

    if (b == NULL)
        return a;

    if (a->data < b->data)
    {
        a->next = merge(a->next, b);
        return a;
    }

    b->next = merge(a, b->next);
    return b;
}

Node *mergeKLists(Node *lists[], int k)
{
    Node *result = NULL;

    for (int i = 0; i < k; i++)
    {
        result = merge(result, lists[i]);
    }

    return result;
}