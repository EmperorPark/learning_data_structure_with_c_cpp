#include <iostream>

int main()
{
    int a = 24;
    const int* Ptr = &a; //포인터 주소의 값을 변경할 수 없다. 

    *Ptr = 25;//값 변경 불가!!
    int temp;
    Ptr = &temp;//주소 변경 가능

    int* const Ptr2 = new int;//포인터 자체를 변경할 수 없다.
    int b;

    *Ptr2 = 25;//값 변경 가능
    Ptr2 = &b;//주소 변경 불가!!

    const int* const Ptr3 = new int;//둘다 변경할 수 없다.
    int c;

    *Ptr3 = 25;//값 변경 불가!!
    Ptr3 = &b;//주소 변경 불가!!



    int arr[10];
    
    *arr = 10;
    int temp2;
    arr = &temp2; // 배열은 기본적으로 Constant Pointer이다.

    return 0;
}