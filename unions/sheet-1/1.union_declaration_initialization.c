#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *mergeSorted(Node *list1, Node *list2)
{
    Node dummy;
    Node *tail = &dummy;

    dummy.next = NULL;

    while (list1 && list2)
    {
        if (list1->data < list2->data)
        {
            tail->next = list1;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            list2 = list2->next;
        }

        tail = tail->next;
    }

    tail->next = (list1) ? list1 : list2;

    return dummy.next;
}

int main()
{
    Node *list1 = malloc(sizeof(Node));
    Node *n2 = malloc(sizeof(Node));
    Node *n3 = malloc(sizeof(Node));
    Node *n4 = malloc(sizeof(Node));

    list1->data = 1;
    n2->data = 3;
    n3->data = 5;
    n4->data = 7;

    list1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    Node *list2 = malloc(sizeof(Node));
    Node *m2 = malloc(sizeof(Node));
    Node *m3 = malloc(sizeof(Node));

    list2->data = 2;
    m2->data = 4;
    m3->data = 6;

    list2->next = m2;
    m2->next = m3;
    m3->next = NULL;

    Node *merged = mergeSorted(list1, list2);

    printf("Merged List: ");

    while (merged)
    {
        printf("%d ", merged->data);
        merged = merged->next;
    }

    return 0;
}