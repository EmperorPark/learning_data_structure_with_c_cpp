/*
Card Game object Implementation file(cpp file)
Class implementation
*/

#include "card.h"

using namespace std;

// Class명을 쓰고 ':'2개를 붙인다음 함수명을 쓰고 상세 구현
// 어느 Class에 속해있는지 알 수 있다.
// 같은이름의 Message(Function)도 Class에 따라 처리 방식이 다를 수 있기 때문(ploymorphism, 다형성)
card::card() 
{
    Sval = diamond;
    Rval = 7;
    Faceup = TRUE;
}

card::~card()
{
    //Destructor
}

int card::Rank()
{
    return Rval;
}

void card::Flip()
{
    //Flip
    return;
}

//내부 변수 복사를 위한 operator Overloading
void card::operator = (card C)
{
    Faceup = C.Faceup;
    Rval = C.Rval;
    Sval = C.Sval;
}


int main()
{
    card MyCard, YourCard;                    //내카드 객체 하나 만들기
    MyCard.Flip();                  //내카드 뒤집기
    cout << MyCard.Rank() << endl;  //내카드 현재 숫자 출력

    YourCard = MyCard;//Overloading된 Operator가 사용됨
    cout << YourCard.Rank() << endl;

    return 0;
}