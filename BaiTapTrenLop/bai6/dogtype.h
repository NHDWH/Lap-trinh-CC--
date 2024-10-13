#ifndef H_dogType
#define H_dogType

#include "pettype.h"

#include <iostream>
using namespace std;

class dogType:public petType
{
    public:
        void print();
        dogType(string a, string b);
    private:
        string breed;
};

void dogType::print()
{
    petType::print();
    cout << "Long cho: " << breed << endl;
}

dogType::dogType(string a, string b):petType(a)
{
    breed = b;
}

#endif