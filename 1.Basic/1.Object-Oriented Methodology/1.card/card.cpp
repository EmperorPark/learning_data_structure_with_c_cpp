/*
Card Game object Implementation file(cpp file)
Class implementation
*/

#include "card.h"

using namespace std;

// Class���� ���� ':'2���� ���δ��� �Լ����� ���� �� ����
// ��� Class�� �����ִ��� �� �� �ִ�.
// �����̸��� Message(Function)�� Class�� ���� ó�� ����� �ٸ� �� �ֱ� ����(ploymorphism, ������)
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

//���� ���� ���縦 ���� operator Overloading
void card::operator = (card C)
{
    Faceup = C.Faceup;
    Rval = C.Rval;
    Sval = C.Sval;
}


int main()
{
    card MyCard, YourCard;                    //��ī�� ��ü �ϳ� �����
    MyCard.Flip();                  //��ī�� ������
    cout << MyCard.Rank() << endl;  //��ī�� ���� ���� ���

    YourCard = MyCard;//Overloading�� Operator�� ����
    cout << YourCard.Rank() << endl;

    return 0;
}