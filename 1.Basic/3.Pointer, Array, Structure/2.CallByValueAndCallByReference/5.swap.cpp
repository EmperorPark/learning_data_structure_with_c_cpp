using namespace std;

#include <iostream>

void wrongSwap(int x, int y);
void ptrSwap(int *x, int *y);
void aliasSwap(int& x, int& y);

int main()
{
    int a = 20;
    int b = 40;
    
    //�纻 �����ؼ� swap ������ ����� ���� �ʴ�.
    wrongSwap(a, b);
    cout << a << endl; 
    cout << b << endl;

    //�����͸� �̿��� swap
    ptrSwap(&a, &b);
    cout << a << endl; 
    cout << b << endl;

    aliasSwap(a, b);
    cout << a << endl;
    cout << b << endl;

    return 0;
}

void wrongSwap(int x, int y)
{
    int temp;
    temp = x; x = y; y = temp; // ���޵� �纻�� ������ ������ �ٲ��� ����

    return;
}

void ptrSwap(int *x, int *y)
{
    int temp;
    temp = *x; *x = *y; *y = temp;

    return;
}

void aliasSwap(int& x, int& y)
{
    int temp;
    temp = x; x = y; y = temp;

    return;
}