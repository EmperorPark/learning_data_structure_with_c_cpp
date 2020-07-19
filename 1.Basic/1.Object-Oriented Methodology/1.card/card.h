/*
Card game object Interface file(Header file)
Class declaration
*/
#include<iostream>

#define TRUE 1
#define FALSE 0

enum suits { diamond, clover, heart, spade };
enum colors { red, balack };

class card
{
///외부(해당객체 밖)에서 사용가능
///외부에서 해당객체에게 일을 시킬때 사용
///객체지향 개념에서 Message역할
///Member Function
public:     
    card();                 //생성자 함수
    ~card();                //소멸자 함수
    colors Color();         //현재 카드의 색상을 되돌려 주는 함수
    bool IsFaceUp();        //앞면이 위인지 아래인지 되돌려주는 함수
    int Rank();             //카드에 쓰인 숫자를 되돌려 주는 함수 // 예제대로 썻지만 암묵적 표준에 따라  GetRank()로 명명하는게 더 좋을듯
    void SetRank(int x);    //카드의 숫자를 x로 세팅하는 함수
    void Draw();            //카드를 화면에 그려내는 함수
    void Flip();            //카드를 뒤집는 멤버 함수
    
    void operator = (card C); //Operator overloading, 할당연산자를 내부변수 복사까지 하기위해 선언

///외부에서 직접 접근 불가
///외부 입장에서는 무의미
///Member Function을 수행하는데 필요한 내부 공간
///Member Data, 객체자신의 변화 상태를 나타냄으로 State Variable, Instance Variable 이라고도 함
private:
    bool Faceup;            //그림이 위로향하고 있는지 나타내는 변수
    int Rval;               //카드 숫자를 나타내는 변수
    suits Sval;             //카드의 종류를 나타내는 변수
};