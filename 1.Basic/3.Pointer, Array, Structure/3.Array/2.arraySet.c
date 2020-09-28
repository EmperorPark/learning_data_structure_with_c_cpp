#include <stdio.h>

int main()
{

    //아래 두개의 루틴은 동일한 로직을 수행

    int Buffer[1024];
    for(int i = 0; i < 1024; i++)
    {
        Buffer[i] = 5;
    }


    int Buffer2[1024];
    for(int* p = Buffer2; p < &Buffer2[1024]; p++)
    {
        *p = 5;
    }


    //Buffer2[1023] = 7; //for test

    for(int j = 1; j < 1024; j++)
    {
        if(Buffer[j] != *(Buffer2 + j))
        {
            printf("Error\n");
            return 0;
        }
    }

    printf("Good\n");

    return 0;
}