#include <iostream>
using namespace std;

class A
{
public :
    
    virtual void fn(){ printf("I'm in A\n"); }
    virtual void fnSub(){ printf("%d\n", this->a); }
private:
    int a = 1;
};


class B : A
{
public :
    int a = 2;
    virtual void fn(){ printf("I'm in B\n"); }
};

class C : A
{
public:
    virtual void fn(){ fnSub(); printf("I'm in C\n"); }
    //virtual void fnSub(){ printf("%d\n", this->a); }//주석 해제시 3 주석시 1 
    virtual void set_a(){ a = 2; };
private:
    int a = 3;
};

int main()
{
    A *a = new A();
    B *b = new B();
    C *c = new C();

    a->fn();
    b->fn();
    c->fn();
};