#include "shape.h"
class triangle : public shape //Inheritance
{
public:
    triangle();         //������ �Լ�
    ~triangle();        //�Ҹ��� �Լ�
    void Draw();        //���� ��ü�� ȭ�鿡 �׸��� �Լ�
    float Area();       //���� ��ü�� ������ ����ϴ� �Լ�
    float GetBase();    //���� ��ü�� �غ��� ���̸� �ǵ����ִ� �Լ�
private:
    float Base;
    float Height;
};