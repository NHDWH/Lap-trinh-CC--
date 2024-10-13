#ifndef H_partTimeEmployee
#define H_partTimeEmployee

#include <iostream>
using namespace std;

#include "employeeType.h"

class partTimeEmployee: public employeeType
{
    public:
        void set(string a, string b, long id, double rate, double hours);
        double calculatePay() const;
        void setPayRate(double rate);
        double getPayRate();
        void setHoursWorked(double hours);
        double getHoursWorked();
        void print() const;
        partTimeEmployee(string a = " ", string b = " ", long id = 0, double rate = 0, double hours = 0);
    private:
        double payRate;
        double hoursWorked;
};

void partTimeEmployee::set(string a, string b, long id, double rate, double hours)
{
    setName(a, b);
    setID(id);
    payRate = rate;
    hoursWorked = hours;
}

void partTimeEmployee::print() const
{
    personType::print();
    cout << "ID: " << getID() << endl;
    cout << "Luong cua ban la: " << calculatePay() << endl;
}

double partTimeEmployee::calculatePay() const
{
    return (payRate*hoursWorked);
}

void partTimeEmployee::setPayRate(double rate)
{
    payRate = rate; // mức lương = lương
}

double partTimeEmployee::getPayRate()
{
    return payRate;
}

void partTimeEmployee::setHoursWorked(double hours)
{
    hoursWorked = hours;
}

double partTimeEmployee::getHoursWorked()
{
    return hoursWorked;
}

partTimeEmployee::partTimeEmployee(string a, string b, long id, double rate, double hours):employeeType(a, b, id)
{
    payRate = rate;
    hoursWorked = hours;
}

#endif