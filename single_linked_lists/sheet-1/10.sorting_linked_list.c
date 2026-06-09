#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *merge(Node *a, Node *b)
{
    if (!a)
        return b;

    if (!b)
        return a;

    if (a->data < b->data)
    {
        a->next = merge(a->next, b);
        return a;
    }

    b->next = merge(a, b->next);
    return b;
}

Node *mergeSort(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *slow = head;
    Node *fast = head->next;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *mid = slow->next;
    slow->next = NULL;

    Node *left = mergeSort(head);
    Node *right = mergeSort(mid);

    return merge(left, right);
}