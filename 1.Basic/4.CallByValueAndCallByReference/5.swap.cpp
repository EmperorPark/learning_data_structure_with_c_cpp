using namespace std;

#include <iostream>

void wrongSwap(int x, int y);
void ptrSwap(int *x, int *y);
void aliasSwap(int& x, int& y);

int main()
{
    int a = 20;
    int b = 40;
    
    //사본 전달해서 swap 함으로 결과가 옳지 않다.
    wrongSwap(a, b);
    cout << a << endl; 
    cout << b << endl;

    //포인터를 이용한 swap
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
    temp = x; x = y; y = temp; // 전달된 사본일 뿐으로 원본이 바뀌지 않음

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