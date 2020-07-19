#include <iostream>
using namespace std;

class Date
{
public:
    Date (int m, int d, int y);
    int Day();
private:
    int month, day, year;
};

Date::Date(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
};

int Date::Day()
{
    return day;
};

int main()
{
    Date d(7,14,2002); cout << Day(); // Day() 함수 호출시 d.Day()로 호출해야함
    Date d; d.Date(7,14,2002); // 인자가 없는 생성자가 없어서 객체를 Date d;로 생성불가
    Date d(7,14,2002); cout << d.year; // year 변수는 private 변수로 외부 접근 불가
    Date d(7,14,2002); cout << d.Month(); // Month 함수의 선언이 없어 실행 불가

    return 0;
}