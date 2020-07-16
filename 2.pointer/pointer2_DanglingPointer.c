#include<stdio.h>
#include<malloc.h>

int main()
{
    int *p, *q;
    p = (int *)malloc(sizeof(int));
    *p = 15;
    q = p;
    free(p);
    p = NULL;

    *q = 30; // DanglingPointer

    printf("%d\n", *q);

    return 0;
}