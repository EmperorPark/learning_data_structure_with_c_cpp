#include <stdio.h>

int main()
{
    int a = 5;
    printf("%d\n", a);// printf�� CallByValue
    int b;
    scanf("%i", &b);// scanf�� CallByReference

    return 0;
}