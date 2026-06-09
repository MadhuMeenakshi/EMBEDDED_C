#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void detectAndRemoveLoop(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
        {
            slow = head;

            while(slow->next != fast->next)
            {
                slow = slow->next;
                fast = fast->next;
            }

            fast->next = NULL;

            printf("Loop detected and removed.\n");
            return;
        }
    }

    printf("No loop found.\n");
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
    n4->data=4;
    n5->data=5;

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;

    n5->next=n2;

    detectAndRemoveLoop(n1);

    Node *temp=n1;

    printf("List after removal: ");

    while(temp)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }

    return 0;
}