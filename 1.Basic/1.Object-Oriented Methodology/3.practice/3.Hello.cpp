#include <iostream>

using namespace std;

class Hello 
{
public:
    void Greet(string name);
};

void Hello::Greet(string name)
{
    cout << "Hello, " << name << endl;

    return;
}

int main()
{
    Hello h;
    string name;
    cout << "Enter Name: ";
    cin >> name;
    h.Greet(name);

    return 0;
}