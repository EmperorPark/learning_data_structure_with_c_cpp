#include "shape.h"
class circle : public shape//Inheritance
{
public:
    circle();         //������ �Լ�
    ~circle();        //�Ҹ��� �Լ�
    void Draw();        //���� ��ü�� ȭ�鿡 �׸��� �Լ�
    float Area();       //���� ��ü�� ������ ����ϴ� �Լ�
    float GetDiameter();    //���� ��ü�� �غ��� ���̸� �ǵ����ִ� �Լ�
private:
    float Radius;
};