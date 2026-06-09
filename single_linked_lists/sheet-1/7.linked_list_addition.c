#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *addLists(Node *list1, Node *list2)
{
    Node *head = NULL;
    Node *tail = NULL;

    int carry = 0;

    while (list1 || list2 || carry)
    {
        int sum = carry;

        if (list1)
        {
            sum += list1->data;
            list1 = list1->next;
        }

        if (list2)
        {
            sum += list2->data;
            list2 = list2->next;
        }

        Node *newNode = malloc(sizeof(Node));

        newNode->data = sum % 10;
        newNode->next = NULL;

        carry = sum / 10;

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}