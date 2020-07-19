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
///�ܺ�(�ش簴ü ��)���� ��밡��
///�ܺο��� �ش簴ü���� ���� ��ų�� ���
///��ü���� ���信�� Message����
///Member Function
public:     
    card();                 //������ �Լ�
    ~card();                //�Ҹ��� �Լ�
    colors Color();         //���� ī���� ������ �ǵ��� �ִ� �Լ�
    bool IsFaceUp();        //�ո��� ������ �Ʒ����� �ǵ����ִ� �Լ�
    int Rank();             //ī�忡 ���� ���ڸ� �ǵ��� �ִ� �Լ� // ������� ������ �Ϲ��� ǥ�ؿ� ����  GetRank()�� ����ϴ°� �� ������
    void SetRank(int x);    //ī���� ���ڸ� x�� �����ϴ� �Լ�
    void Draw();            //ī�带 ȭ�鿡 �׷����� �Լ�
    void Flip();            //ī�带 ������ ��� �Լ�
    
    void operator = (card C); //Operator overloading, �Ҵ翬���ڸ� ���κ��� ������� �ϱ����� ����

///�ܺο��� ���� ���� �Ұ�
///�ܺ� ���忡���� ���ǹ�
///Member Function�� �����ϴµ� �ʿ��� ���� ����
///Member Data, ��ü�ڽ��� ��ȭ ���¸� ��Ÿ������ State Variable, Instance Variable �̶�� ��
private:
    bool Faceup;            //�׸��� �������ϰ� �ִ��� ��Ÿ���� ����
    int Rval;               //ī�� ���ڸ� ��Ÿ���� ����
    suits Sval;             //ī���� ������ ��Ÿ���� ����
};