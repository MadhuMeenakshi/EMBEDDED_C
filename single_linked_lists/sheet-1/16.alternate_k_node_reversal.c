#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *reverseAlternateK(Node *head, int k)
{
    if (head == NULL)
        return NULL;

    Node *current = head;
    Node *prev = NULL;
    Node *next = NULL;

    int count = 0;

    while (current && count < k)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    head->next = current;

    count = 0;

    while (current && count < k - 1)
    {
        current = current->next;
        count++;
    }

    if (current)
        current->next = reverseAlternateK(current->next, k);

    return prev;
}