using namespace std;
#include <iostream>

void fcn(int &pi);

int main()
{
    int n = 3;
    fcn(n);//ȣ�� �Լ��� alias�� ��������� ����ȣ��� �����ϴ�. ���������� �����ϳ� CallByValue�� �򰥸��� ������ ��������
    cout << n << endl;

    int kim = 0;
    int& BigMouth = kim; //alias�� ����
    BigMouth = 10;//kim�̶� �����ϰ� ����

    cout << kim << endl;

    return 0;
}

void fcn(int &pi) // &�� Address�����ڰ� �ƴ϶� Alias�� ����
{
    pi = 5;
    
    return;
}