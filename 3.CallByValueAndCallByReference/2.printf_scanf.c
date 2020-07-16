#include <stdio.h>

int main()
{
    int a = 5;
    printf("%d\n", a);// printf´Â CallByValue
    int b;
    scanf("%i", &b);// scanf´Â CallByReference

    return 0;
}