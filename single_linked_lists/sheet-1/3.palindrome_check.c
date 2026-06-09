#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int isPalindrome(Node *head)
{
    int arr[100];
    int count=0;

    Node *temp=head;

    while(temp)
    {
        arr[count++]=temp->data;
        temp=temp->next;
    }

    for(int i=0;i<count/2;i++)
    {
        if(arr[i] != arr[count-1-i])
            return 0;
    }

    return 1;
}

int main()
{
    Node *n1=malloc(sizeof(Node));
    Node *n2=malloc(sizeof(Node));
    Node *n3=malloc(sizeof(Node));
    Node *n4=malloc(sizeof(Node));

    n1->data=1;
    n2->data=2;
    n3->data=2;
    n4->data=1;

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=NULL;

    if(isPalindrome(n1))
        printf("Linked list is a palindrome.\n");
    else
        printf("Linked list is not a palindrome.\n");

    return 0;
}