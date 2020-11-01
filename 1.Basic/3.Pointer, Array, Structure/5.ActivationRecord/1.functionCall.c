#include <stdio.h>
#include <malloc.h>

int a; // global variable

int fcn(int p);

int main(){
    int b; char *s; // local variable
    s = (char*)malloc(sizeof(char) * 10); // 10 bytes dynamic variable
    b = fcn(5);
    // Here is Fuction fcn's return address
    free(s);
    s = NULL;

    return 0;
}

int fcn(int p){ // Parameter(Stack)
    int b = 2; //Local variable
    b = b + p;
    return b; // Return Value
}