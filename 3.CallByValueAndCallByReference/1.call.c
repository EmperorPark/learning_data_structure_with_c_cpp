#include<stdio.h>

void fcn(int i);
void fcn2(int *pi);

int main()
{
    int n = 3;
    fcn(n);// Call by Value �纻����(n�� ���� �ѱ�)
    printf("%d\n", n);//���� �״�� 3��

    fcn2(&n);// Call by Reference
    printf("%d\n", n);//���� �����

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