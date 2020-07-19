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
    Date d(7,14,2002); cout << Day(); // Day() �Լ� ȣ��� d.Day()�� ȣ���ؾ���
    Date d; d.Date(7,14,2002); // ���ڰ� ���� �����ڰ� ��� ��ü�� Date d;�� �����Ұ�
    Date d(7,14,2002); cout << d.year; // year ������ private ������ �ܺ� ���� �Ұ�
    Date d(7,14,2002); cout << d.Month(); // Month �Լ��� ������ ���� ���� �Ұ�

    return 0;
}