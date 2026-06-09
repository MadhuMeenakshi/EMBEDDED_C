#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *random;
} Node;

Node *deepCopy(Node *head)
{
    Node *temp=head;

    while(temp)
    {
        Node *copy=malloc(sizeof(Node));

        copy->data=temp->data;
        copy->next=temp->next;

        temp->next=copy;
        temp=copy->next;
    }

    temp=head;

    while(temp)
    {
        if(temp->random)
            temp->next->random=temp->random->next;

        temp=temp->next->next;
    }

    Node *copyHead=head->next;

    temp=head;

    while(temp)
    {
        Node *copy=temp->next;

        temp->next=copy->next;

        if(copy->next)
            copy->next=copy->next->next;

        temp=temp->next;
    }

    return copyHead;
}

int main()
{
    Node *n1=malloc(sizeof(Node));
    Node *n2=malloc(sizeof(Node));
    Node *n3=malloc(sizeof(Node));
    Node *n4=malloc(sizeof(Node));
    Node *n5=malloc(sizeof(Node));

    n1->data=1;
    n2->data=2;
    n3->data=3;
    n4->data=5;
    n5->data=7;

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;

    n1->random=n3;
    n2->random=n4;
    n3->random=n5;
    n4->random=n1;
    n5->random=n3;

    Node *copy = deepCopy(n1);

    printf("Deep copy created successfully.\n");

    while(copy)
    {
        printf("%d ", copy->data);
        copy=copy->next;
    }

    return 0;
}