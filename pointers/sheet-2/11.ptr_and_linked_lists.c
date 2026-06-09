#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insertEnd(struct Node **head,int value)
{
    struct Node *newNode =
        (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    if(*head == NULL)
    {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;

    while(temp->next)
        temp = temp->next;

    temp->next = newNode;
}

void display(struct Node *head)
{
    while(head)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}

int main()
{
    struct Node *head = NULL;

    insertEnd(&head,10);
    insertEnd(&head,20);
    insertEnd(&head,30);

    display(head);

    return 0;
}