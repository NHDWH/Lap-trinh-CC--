#ifndef H_employeeType
#define H_employeeType

#include "personType.h"

#include <iostream>
using namespace std;

class employeeType:public personType
{
    public:
        virtual void print () const = 0; // Hàm ảo
        virtual double calculatePay() const = 0; // Hàm ảo
        void setID(long id);
        long getID() const;
        employeeType(string a = " ", string b = " ", long id = 0);
    private:
        long personID;
};

void employeeType::setID(long id)
{
    personID = id;
}

long employeeType::getID() const
{
    return personID;
}

employeeType::employeeType(string a, string b, long id):personType(a, b)
{
    personID = id;
}

#endif