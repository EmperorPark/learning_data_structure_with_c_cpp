#include <stdio.h>
#include <malloc.h>

int main()
{
    int *p;
    p = (int *)malloc(sizeof(int));
    *p = 15;
    
    printf("%d\n", *p); //林家俊 乐绰 蔼
    printf("%d\n", *&p); // 林家俊 乐绰 蔼狼 林家 *(&p) == 林家
    printf("%d\n", p); // 林家

    free(p); // 皋葛府 秦力
    p = NULL; // 馆券茄 林家 NULL 贸府

    return 0;
}