#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void splitList(Node *head, Node **firstHalf, Node **secondHalf)
{
    if (head == NULL)
    {
        *firstHalf = NULL;
        *secondHalf = NULL;
        return;
    }

    Node *slow = head;
    Node *fast = head->next;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    *firstHalf = head;
    *secondHalf = slow->next;

    slow->next = NULL;
}