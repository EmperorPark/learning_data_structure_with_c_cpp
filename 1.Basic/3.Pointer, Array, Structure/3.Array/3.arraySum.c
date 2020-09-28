//array using parameter
#include <stdio.h>

//array parameter
int SumUp(int A[], int size)
{
    int Sum = 0;
    for(int i = 0; i < size; i++)
    {
        Sum += A[i];
    }

    return Sum;
}

//pointer parameter
int SumUp2(int *A, int size)
{
    int Sum = 0;
    for(int i = 0; i < size; i++)
    {
        Sum += *A;
        A++; // A is copy address value. Even if this changes, the original(Original parameter of the parent function) does not change.
    }

    return Sum;
}

//int SumUp3(const int A[], int size)
int SumUp3(const int *A, int size) //If You don't Want to change original parameter, you can use constant
{
    int Sum = 0;
    for(int i = 0; i < size; i++)
    {
        Sum += *A;
        A++; // A is copy address value. Even if this changes, the original(Original parameter of the parent function) does not change.
    }

    return Sum;
}


int main()
{
    int Total; int Score[5];
    Score[0] = 98; Score[1] = 92; Score[2] = 88;


    // Generally array transfer with their size(you can use all the sizes or not like the example)
    // Array is pointer. So inner value is not copied. Address Value is copied(The address value itself, which is a function parameter, is copied to Call by Value. When the internal value is changed, the address is found and changed. So it is Call by Reference)
    Total = SumUp(Score, 3); 

    printf("Total: %d\n", Total);


    Total = SumUp2(Score, 3);

    printf("Total: %d\n", Total);

    return 0;
}