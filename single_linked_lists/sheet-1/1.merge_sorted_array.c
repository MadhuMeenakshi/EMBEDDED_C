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
    Node *list1 = createNode(1);
    list1->next = createNode(3);
    list1->next->next = createNode(5);
    list1->next->next->next = createNode(7);

    Node *list2 = createNode(2);
    list2->next = createNode(4);
    list2->next->next = createNode(6);

    Node *merged = mergeSorted(list1, list2);

    printf("Merged List: ");
    printList(merged);

    return 0;
}