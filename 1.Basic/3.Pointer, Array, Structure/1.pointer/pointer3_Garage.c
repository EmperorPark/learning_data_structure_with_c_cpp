#include <stdio.h>
#include <malloc.h>

int main()
{
    int *p, *q;
    p = (int *)malloc(sizeof(int));
    q = (int *)malloc(sizeof(int));

    *p = 5, *q = 20;

    printf("%d %d\n", *p, *q);

    int *temp = p; // int *temp; temp = p; �� ���� int *temp; *temp = p; �� �򰥸��� ����(����� *�� ȣ��� *�� ����)
    p = q; // p�� ����Ű�� �ּҰ� q�� ��ü�Ǹ鼭 ���� p�� �ּҰ� Garbage�� ��

    printf("%d %d %d\n", *p, *q, *temp); // temp�� ���ٸ� p���� ���̻� ������ �� ���� ���α׷��� �������� �޸𸮸� �����ϰ� ��

    free(p);
    free(q); // p�� q�� �����Ƿ� Error �߻�! //���� �϶��� �ְ� �ƴҶ��� �ִ� �ֱ׷���? ���� ����ϴ� ó���� ���ܰ� �߻��ϴ� �� ���� �߻� ����??? ����?? //�켱 �⺻������ ���� �߻��ؾ� ����

    free(temp);
    p = NULL; q = NULL; temp = NULL;

    return 0;
}