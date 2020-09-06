#include<stdio.h>

int main()
{
    char name[10] = "Kwon Eun";
    printf("%c\n", name[0]);
    printf("%c\n", *name);
    printf("%c\n", *(name+1)); // +1은 포인터로 선언시 주소값에 1을 더하는게 아닌 자료형 사이즈 만큼 더해지게 된다.

    return 0;
}