#include <iostream>

using namespace std;

class Complexity
{
public:
    Complexity();
    Complexity(int, int);
    Complexity AddTo(Complexity);
    Complexity operator += (Complexity c);
    void Print();
private:
    int myReal;
    int myImaginary;
};

Complexity::Complexity()
{
    myReal = 0;
    myImaginary = 0;
}

Complexity::Complexity(int r, int i)
{
    myReal = r;
    myImaginary = i;
}

Complexity Complexity::AddTo(Complexity c)
{
    myReal += c.myReal;
    myImaginary += c.myImaginary;
    return Complexity (myReal, myImaginary);
}

Complexity Complexity::operator+= (Complexity c)
{
    return AddTo(c);
}

void Complexity::Print()
{
    cout << myReal;
    if(myImaginary >= 0)
        cout << "+";
    cout << myImaginary << 'i' << endl;
    return;
}

int main()
{
    Complexity c1; c1.Print();
    Complexity c2(1,2); c2.Print();
    Complexity c3(1,-2); c3.Print();
    Complexity a1(1,2), b1(3,4); a1.AddTo(b1); a1.Print();
    Complexity a2(1,2), b2(3,4); a2+=b2; a2.Print();

    return 0;
}