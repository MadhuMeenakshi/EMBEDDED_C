#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *reversePairs(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *newHead = head->next;

    head->next = reversePairs(newHead->next);
    newHead->next = head;

    return newHead;
}