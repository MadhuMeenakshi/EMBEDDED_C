#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *reverseK(Node *head, int k)
{
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

    if (next)
        head->next = reverseK(next, k);

    return prev;
}