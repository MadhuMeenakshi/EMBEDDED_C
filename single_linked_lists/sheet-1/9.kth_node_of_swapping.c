#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void swapKth(Node *head, int k)
{
    int count = 0;
    Node *temp = head;

    while (temp)
    {
        count++;
        temp = temp->next;
    }

    if (k > count)
        return;

    Node *first = head;
    Node *second = head;

    for (int i = 1; i < k; i++)
        first = first->next;

    for (int i = 1; i < count - k + 1; i++)
        second = second->next;

    int t = first->data;
    first->data = second->data;
    second->data = t;
}