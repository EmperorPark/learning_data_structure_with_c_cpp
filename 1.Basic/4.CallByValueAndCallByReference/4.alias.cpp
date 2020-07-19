using namespace std;
#include <iostream>

void fcn(int &pi);

int main()
{
    int n = 3;
    fcn(n);//호출 함수가 alias를 사용함으로 참조호출과 동일하다. 문법적으로 간결하나 CallByValue와 헷갈릴수 있으니 주의하자
    cout << n << endl;

    int kim = 0;
    int& BigMouth = kim; //alias의 선언
    BigMouth = 10;//kim이랑 동일하게 사용됨

    cout << kim << endl;

    return 0;
}

void fcn(int &pi) // &가 Address연산자가 아니라 Alias로 사용됨
{
    pi = 5;
    
    return;
}