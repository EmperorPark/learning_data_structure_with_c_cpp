#include "shape.h"
class rectangle : public shape//Inheritance
{
public:
    rectangle();         //������ �Լ�
    ~rectangle();        //�Ҹ��� �Լ�
    void Draw();        //���� ��ü�� ȭ�鿡 �׸��� �Լ�
    float Area();       //���� ��ü�� ������ ����ϴ� �Լ�
    float GetWidth();    //���� ��ü�� �غ��� ���̸� �ǵ����ִ� �Լ�
private:
    float Width;
    float Length;
};