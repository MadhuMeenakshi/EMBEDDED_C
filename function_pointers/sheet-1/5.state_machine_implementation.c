#include <stdio.h>

void initState()
{
    printf("INIT State\n");
}

void runState()
{
    printf("RUN State\n");
}

void stopState()
{
    printf("STOP State\n");
}

void errorState()
{
    printf("ERROR State\n");
}

void stateMachineDemo()
{
    int choice;

    void (*state)(void);

    printf("1.INIT\n2.RUN\n3.STOP\n4.ERROR\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            state = initState;
            break;

        case 2:
            state = runState;
            break;

        case 3:
            state = stopState;
            break;

        case 4:
            state = errorState;
            break;

        default:
            return;
    }

    state();
}

int main()
{
    stateMachineDemo();
    return 0;
}