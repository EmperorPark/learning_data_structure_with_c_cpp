#include <iostream>

using namespace std;

class BaseClass 
{
public:
    char * getMessage()
    {
        return "Good morning, World!";
    }
    virtual char * getMessage2()//���� �Լ� ����, �ڽ� Ÿ�Կ� �´� �Լ��� �����϶� ��� �ǹ�
    {
        return "Good morning, World!";
    }
};

class SubClass : public BaseClass
{
public:
    char * getMessage() 
    {
        return "Good evening, World!";
    }
    char * getMessage2() 
    {
        return "Good evening, World!";
    }
};
class TEST
{
};

int main()
{
    BaseClass b, *p;
    SubClass s;
    TEST t;
    //p = &t; // �ٸ� ������ Class�̱⿡ �Ҵ� �Ұ�
    p = &s;//������(ploymorphsim) ���� ��ü�� ����� ������ ���� ��ü�� �ּҳ� ���� �Ҵ� ����
    cout << p->getMessage() << endl;// *p ����� ��ü�� Ÿ���� BaseClass������ p = &s�� ���� SubClass��ü�� �ּҷ� �����ϴ��� BaseClass�� �Լ��� �����(���� ���ε�)
    cout << p->getMessage2() << endl;// virtual�� ���� ��ü�� �Լ��� ������ getMessage2�� ��� ���� ����Ű�� ��ü�� SubClass�� �Լ��� �ҷ��´�.(���� ���ε�, �������� ����)
    cout << b.getMessage2() << endl;
    return 0;
}