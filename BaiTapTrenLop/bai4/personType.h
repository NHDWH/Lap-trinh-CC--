#ifndef H_personType
#define H_personType

#include <iostream>
using namespace std;

class personType
{
    public:
        void print() const;
        void setName(string a, string b);
        string getFirstName() const;
        string getLastName() const;
        personType(string a = " ", string b = " ");
    private:
        string firstName;
        string lastName;
};

void personType::print() const
{
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
}

void personType::setName(string a, string b)
{
    firstName = a;
    lastName = b;
}

string personType::getFirstName() const
{
    return firstName;
}

string personType::getLastName() const
{
    return lastName;
}

personType::personType (string a, string b)
{
    firstName = a;
    lastName = b;
}

#endif