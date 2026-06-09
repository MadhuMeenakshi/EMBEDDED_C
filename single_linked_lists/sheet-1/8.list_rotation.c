#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *rotateRight(Node *head, int k)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *temp = head;
    int length = 1;

    while (temp->next)
    {
        temp = temp->next;
        length++;
    }

    temp->next = head;

    k = k % length;

    int move = length - k;

    while (move--)
        temp = temp->next;

    head = temp->next;
    temp->next = NULL;

    return head;
}