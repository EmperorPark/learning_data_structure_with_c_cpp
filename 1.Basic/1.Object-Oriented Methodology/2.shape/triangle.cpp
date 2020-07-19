#include "triangle.h"
#include "circle.h"
#include "rectangle.h"

int main()
{
    triangle T;
    circle C;
    rectangle R;
    T.Rotate();//Dynamic Binding, triangle 객체에는 없는 함수지만 상위 객체에 있는 함수로 사용 가능

    //같은 이름의 함수더라도 객체에 따라 다르게 반응한다. ploymorphism(다형성)
    T.Draw();
    C.Draw();
    R.Draw();
    
    return 0;
}