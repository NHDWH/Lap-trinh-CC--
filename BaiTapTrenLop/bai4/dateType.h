#ifndef H_dateType
#define H_dateType

#include <iostream>
using namespace std;

class dateType
{
    public:
        void setDate(int a, int b, int c);
        int getDay() const;
        int getMonth() const;
        int getYear() const;
        void printDate() const;
        dateType (int a = 1, int b = 1, int c = 1900);
    private:
        int dMonth;
        int dDay;
        int dYear;
};

void dateType::setDate(int a, int b, int c)
{
    dDay = a;
    dMonth = b;
    dYear = c;
}

int dateType::getDay() const
{
    return dDay;
}

int dateType::getMonth() const
{
    return dMonth;
}

int dateType::getYear() const
{
    return dYear;
}

void dateType::printDate() const
{
    cout << "Ngay: " << dDay << endl;
    cout << "Thang: " << dMonth << endl;
    cout << "Nam: " << dYear << endl;
}

dateType::dateType(int a, int b, int c)
{
    dDay = a;
    dMonth = b;
    dYear = c;
}

#endif