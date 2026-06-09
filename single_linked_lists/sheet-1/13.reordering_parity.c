#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *oddEvenList(Node *head)
{
    if (head == NULL)
        return head;

    Node *odd = head;
    Node *even = head->next;
    Node *evenHead = even;

    while (even && even->next)
    {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;

    return head;
}