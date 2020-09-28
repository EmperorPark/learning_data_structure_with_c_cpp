#include<stdio.h>

int main()
{
    char name[10] = "Kwon Eun";
    printf("%c\n", name[0]);
    printf("%c\n", *name);
    printf("%c\n", *(name+1)); // +1은 포인터로 선언시 주소값에 1을 더하는게 아닌 자료형 사이즈 만큼 더해지게 된다. //C++에서는 호환안되는 형식

    int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d\n", num[0]);
    printf("%d\n", *num);
    printf("%d\n", *(num+7)); // +1은 포인터로 선언시 주소값에 1을 더하는게 아닌 자료형 사이즈 만큼 더해지게 된다. //C++에서는 호환안되는 형식

    return 0;
}