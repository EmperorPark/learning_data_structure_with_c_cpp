#include <iostream>

int main()
{
    int a = 24;
    const int* Ptr = &a; //������ �ּ��� ���� ������ �� ����. 

    *Ptr = 25;//�� ���� �Ұ�!!
    int temp;
    Ptr = &temp;//�ּ� ���� ����

    int* const Ptr2 = new int;//������ ��ü�� ������ �� ����.
    int b;

    *Ptr2 = 25;//�� ���� ����
    Ptr2 = &b;//�ּ� ���� �Ұ�!!

    const int* const Ptr3 = new int;//�Ѵ� ������ �� ����.
    int c;

    *Ptr3 = 25;//�� ���� �Ұ�!!
    Ptr3 = &b;//�ּ� ���� �Ұ�!!



    int arr[10];
    
    *arr = 10;
    int temp2;
    arr = &temp2; // �迭�� �⺻������ Constant Pointer�̴�.

    return 0;
}