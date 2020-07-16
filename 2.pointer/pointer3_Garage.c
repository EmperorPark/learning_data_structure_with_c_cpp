#include <stdio.h>
#include <malloc.h>

int main()
{
    int *p, *q;
    p = (int *)malloc(sizeof(int));
    q = (int *)malloc(sizeof(int));

    *p = 5, *q = 20;

    printf("%d %d\n", *p, *q);

    int *temp = p; // int *temp; temp = p; 와 같다 int *temp; *temp = p; 와 헷갈리지 말것(선언시 *와 호출시 *의 차이)
    p = q; // p가 가르키는 주소가 q로 대체되면서 기존 p의 주소가 Garbage가 됨

    printf("%d %d %d\n", *p, *q, *temp); // temp가 없다면 p값을 더이상 해제할 수 없어 프로그램이 쓸데없이 메모리를 점유하게 됨

    free(p);
    free(q); // p와 q가 같으므로 Error 발생! //예외 일때도 있고 아닐때도 있다 왜그럴까? 실행 몇번하니 처음엔 예외가 발생하다 그 이후 발생 안함??? 왜지?? //우선 기본적으로 예외 발생해야 맞음

    free(temp);
    p = NULL; q = NULL; temp = NULL;

    return 0;
}