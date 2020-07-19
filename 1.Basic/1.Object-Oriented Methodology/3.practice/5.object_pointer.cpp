#include <iostream>

using namespace std;

class BaseClass 
{
public:
    char * getMessage()
    {
        return "Good morning, World!";
    }
    virtual char * getMessage2()//가상 함수 선언, 자신 타입에 맞는 함수를 실행하라 라는 의미
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
    //p = &t; // 다른 형식의 Class이기에 할당 불가
    p = &s;//다형성(ploymorphsim) 상위 객체로 선언된 변수에 하위 객체의 주소나 값을 할당 가능
    cout << p->getMessage() << endl;// *p 선언시 객체의 타입이 BaseClass임으로 p = &s를 통해 SubClass객체의 주소로 변경하더라도 BaseClass의 함수가 실행됨(정적 바인딩)
    cout << p->getMessage2() << endl;// virtual로 원본 객체의 함수를 선언한 getMessage2의 경우 실제 가리키는 객체인 SubClass의 함수를 불러온다.(동적 바인딩, 다형성의 구현)
    cout << b.getMessage2() << endl;
    return 0;
}