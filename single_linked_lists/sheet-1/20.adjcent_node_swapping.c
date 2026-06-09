#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *swapAdjacentPairs(Node *head)
{
    Node dummy;
    dummy.next = head;

    Node *prev = &dummy;

    while (head && head->next)
    {
        Node *first = head;
        Node *second = head->next;

        prev->next = second;
        first->next = second->next;
        second->next = first;

        prev = first;
        head = first->next;
    }

    return dummy.next;
}