#include <stdio.h>
#include <malloc.h>

int main()
{
    int *p;
    p = (int *)malloc(sizeof(int));
    *p = 15;
    
    printf("%d\n", *p); //�ּҿ� �ִ� ��
    printf("%d\n", *&p); // �ּҿ� �ִ� ���� �ּ� *(&p) == �ּ�
    printf("%d\n", p); // �ּ�

    free(p); // �޸� ����
    p = NULL; // ��ȯ�� �ּ� NULL ó��

    return 0;
}