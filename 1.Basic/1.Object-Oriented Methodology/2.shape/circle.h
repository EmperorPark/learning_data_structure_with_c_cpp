#include "shape.h"
class circle : public shape//Inheritance
{
public:
    circle();         //생성자 함수
    ~circle();        //소멸자 함수
    void Draw();        //현재 객체를 화면에 그리는 함수
    float Area();       //현재 객체의 면적을 계산하는 함수
    float GetDiameter();    //현재 객체의 밑변의 길이를 되돌려주는 함수
private:
    float Radius;
};