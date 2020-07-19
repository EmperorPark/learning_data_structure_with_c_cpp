#include <iostream>
using namespace std;
class A
{
public:
    int F() { return 1; }; 

};

class B : public A
{
public:
    int F() { return 2; };
};

int main()
{
    A a;
    B b;
    cout << a.F() << "," << b.F() << endl;
    return 0;
}