#include<stdio.h>

int main()
{
    char name[10] = "Kwon Eun";
    printf("%c\n", name[0]);
    printf("%c\n", *name);
    printf("%c\n", *(name+1)); // +1�� �����ͷ� ����� �ּҰ��� 1�� ���ϴ°� �ƴ� �ڷ��� ������ ��ŭ �������� �ȴ�.

    return 0;
}