#include<iostream>

using namespace std;

class BookClass 
{
   public :
   int Number;
};

void fcn(BookClass b);
void fcn2(BookClass *b);

int main()
{
    BookClass myBook;
    myBook.Number = 5;

    fcn(myBook);//������ü�� ����(�ջ�) ������ ���� �纻 ����(CallByValue)

    //������ü�� ����� ũ�ٰ� �����ϰ� ���� ���ҽ��� ���̱����� ���� ����(CallByReference)
    //������ü�� �����Ǹ� �ȵǴ� ��� �Լ��� �����ϰ� �����ؼ� ¥����
    //�翬�� ������ü�� �����ؾ� �ϴ� ��쿡�� ������ �����ؾ� ��
    fcn2(&myBook);

    return 0;
}

void fcn(BookClass b)
{
    cout << b.Number << endl;
}

void fcn2(BookClass *b)
{
    cout << (*b).Number << endl;
}