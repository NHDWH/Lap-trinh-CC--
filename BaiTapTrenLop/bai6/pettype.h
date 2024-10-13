#ifndef H_petType
#define H_petType

#include <iostream>
using namespace std;

class petType
{
    public:
        void print();
        petType(string a = " ");
    private:
        string name;
};

void petType::print()
{
    cout << "Ten thu cung la: " << name << endl;
}

petType::petType(string a)
{
    name = a;
}

#endif