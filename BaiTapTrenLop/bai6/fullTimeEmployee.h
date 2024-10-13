#ifndef H_fullTimeEmployee
#define H_fullTimeEmployee

#include "employeeType.h"

#include <iostream>
using namespace std;

class fullTimeEmployee: public employeeType
{
    public:
        void set(string a, string b, long id, double salary, double bonus);
        void setSalary(double salary);
        double getSalary();
        void setBonus(double bonus);
        double getBonus();
        void print() const;
        double calculatePay() const; //Hàm real
        fullTimeEmployee(string a = " ",string b = " ", long id = 0, double salary = 0, double bonus = 0);
    private:
        double empSalary;
        double empBonus;
};

void fullTimeEmployee::set(string a, string b, long id, double salary, double bonus)
{
    setName(a, b);
    setID(id);
    empSalary = salary; // người làm công ăn lương = lương
    empBonus = bonus; // người được thưởng thêm = thưởng thêm
}

void fullTimeEmployee::setSalary(double salary)
{
    empSalary = salary;
}

double fullTimeEmployee::getSalary()
{
    return empSalary;
}

void fullTimeEmployee::setBonus(double bonus)
{
    empBonus = bonus;
}

double fullTimeEmployee::getBonus()
{
    return empBonus;
}

double fullTimeEmployee::calculatePay() const
{
    return empBonus + empSalary;
}

void fullTimeEmployee::print() const
{
    personType::print();
    cout << "ID user: " << getID() << endl;
    cout << "Salary: " << calculatePay() << endl;
    cout << "*********************"<<endl;
}

fullTimeEmployee::fullTimeEmployee(string a, string b , long id, double salary, double bonus):employeeType(a, b, id)
{
    empSalary = salary;
    empBonus = bonus;
}

#endif