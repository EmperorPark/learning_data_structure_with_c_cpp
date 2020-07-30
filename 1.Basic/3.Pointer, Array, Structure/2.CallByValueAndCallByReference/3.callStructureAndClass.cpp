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

    fcn(myBook);//원본객체의 수정(손상) 방지를 위한 사본 전달(CallByValue)

    //원본객체가 사이즈가 크다고 가정하고 복사 리소스를 줄이기위한 참조 전달(CallByReference)
    //원본객체가 수정되면 안되는 경우 함수를 안전하게 주의해서 짜야함
    //당연히 원본객체를 수정해야 하는 경우에도 참조를 전달해야 함
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