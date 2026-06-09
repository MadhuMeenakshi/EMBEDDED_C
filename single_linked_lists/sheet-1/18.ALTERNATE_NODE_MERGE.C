#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *mergeAlternate(Node *list1, Node *list2)
{
    Node dummy;
    Node *tail = &dummy;

    dummy.next = NULL;

    while (list1 && list2)
    {
        tail->next = list1;
        list1 = list1->next;
        tail = tail->next;

        tail->next = list2;
        list2 = list2->next;
        tail = tail->next;
    }

    tail->next = list1 ? list1 : list2;

    return dummy.next;
}