#include <stdio.h>

struct Address
{
    char city[20];
};

struct Student
{
    int id;
    struct Address addr;
};

int main()
{
    struct Student s = {1,"Bangalore"};

    printf("%d %s\n",s.id,s.addr.city);

    return 0;
}


/*
struct Sensor
{
    int value;
};

struct Sensor sensor[5];
*/

/*
struct Buffer
{
    int samples[10];
};
*/
/*
struct Packet
{
    Header header;
    char payload[100];
};
*/