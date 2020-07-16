#include<stdio.h>

void fcn(int i);
void fcn2(int *pi);

int main()
{
    int n = 3;
    fcn(n);// Call by Value 사본전달(n의 값만 넘김)
    printf("%d\n", n);//값이 그대로 3임

    fcn2(&n);// Call by Reference
    printf("%d\n", n);//값이 변경됨

    return 0;
}

void fcn(int i)
{
    i = 5;

    return;
}

void fcn2(int *pi)
{
    *pi = 5;

    return;
}