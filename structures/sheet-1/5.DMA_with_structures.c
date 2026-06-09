#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int id;
};

int main()
{
    struct Student *ptr;

    ptr = malloc(sizeof(struct Student));

    if(ptr == NULL)
        return 1;

    ptr->id = 101;

    printf("%d\n", ptr->id);

    free(ptr);

    return 0;
}

/*

struct Node
{
    int data;
    struct Node *next;
};
*/

/*
struct Node
{
    int data;
    struct Node *next;
};

struct Queue
{
    struct Node *front;
    struct Node *rear;
};
*/


/*
struct Block
{
    int used;
    int value;
};

struct Block pool[10];
*/