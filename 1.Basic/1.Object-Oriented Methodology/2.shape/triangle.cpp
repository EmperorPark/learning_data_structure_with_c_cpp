#include "triangle.h"
#include "circle.h"
#include "rectangle.h"

int main()
{
    triangle T;
    circle C;
    rectangle R;
    T.Rotate();//Dynamic Binding, triangle ��ü���� ���� �Լ����� ���� ��ü�� �ִ� �Լ��� ��� ����

    //���� �̸��� �Լ����� ��ü�� ���� �ٸ��� �����Ѵ�. ploymorphism(������)
    T.Draw();
    C.Draw();
    R.Draw();
    
    return 0;
}