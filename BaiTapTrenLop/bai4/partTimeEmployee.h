#ifndef H_partTimeEmployee
#define H_partTimeEmployee

#include <iostream>
using namespace std;

#include "personType.h"

class partTimeEmployee:public personType
{
    public:
        void print() const;
        double calculatePay() const;
        void setNameRateHours(string a, string b, double c, double d);
        partTimeEmployee(string a = " ", string b = " ", double c = 0, double d = 0);
    private:
        double payRate;
        double hoursWorked;
};


void partTimeEmployee::print() const
{
    personType::print();
    cout << "Luong cua ban la: " << calculatePay() << endl;
}

double partTimeEmployee::calculatePay() const
{
    return (payRate*hoursWorked); // mức lương * giờ làm việc
}

void partTimeEmployee::setNameRateHours(string a, string b, double c, double d) // cập nhật tên, tỷ lệ lương và số giờ làm việc của một nhân viên đã tồn tại.
{
    setName(a, b);
    payRate = c;
    hoursWorked = d;
}

partTimeEmployee::partTimeEmployee(string a, string b, double c, double d):personType(a, b) // dùng khi tạo một nhân viên mới, nó thiết lập tên (thông qua lớp cơ sở), tỷ lệ lương và số giờ làm việc ngay từ đầu.
{
    payRate = c;
    hoursWorked = d;
}

#endif