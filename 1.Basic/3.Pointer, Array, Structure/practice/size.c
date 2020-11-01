// result has difference by compiler 

#include <stdio.h>

int main(){
    int size;
    
    char buffer[1024]; char* bp = buffer; char* ep = bp + 1024;
    printf("%u - %u: ", ep, bp);
    size = ep - bp;
    printf("%d\n", size);

    int a[10]; int *start = &a[0]; int *end = &a[10];
    printf("%u - %u: ", end, start);
    size = end - start;
    printf("%d\n", size);

    void *p = &a[0]; void *q = &a[10];
    printf("%u - %u: ", q, p);
    //size = q - p;
    printf("%d\n", size);

    return 0;

}