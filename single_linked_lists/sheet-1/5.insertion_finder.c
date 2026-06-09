#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *findIntersection(Node *head1, Node *head2)
{
    Node *p1=head1;
    Node *p2=head2;

    while(p1 != p2)
    {
        p1 = p1 ? p1->next : head2;
        p2 = p2 ? p2->next : head1;
    }

    return p1;
}

int main()
{
    Node *common1=malloc(sizeof(Node));
    Node *common2=malloc(sizeof(Node));

    common1->data=3;
    common2->data=4;

    common1->next=common2;
    common2->next=NULL;

    Node *a1=malloc(sizeof(Node));
    Node *a2=malloc(sizeof(Node));

    a1->data=1;
    a2->data=2;

    a1->next=a2;
    a2->next=common1;

    Node *b1=malloc(sizeof(Node));

    b1->data=5;
    b1->next=common1;

    Node *result = findIntersection(a1,b1);

    if(result)
        printf("Intersection found at node with data: %d\n",
               result->data);
    else
        printf("No intersection found.\n");

    return 0;
}