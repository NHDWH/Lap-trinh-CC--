#include <iostream>
using namespace std;

#include "personType.h"

int main()
{
    personType nguoi1("Nguyen", "Huy Dat");
    nguoi1.print();

    personType nguoi2;
    nguoi2.setFirstName("Nguyen");
    nguoi2.setLastName("Van Teo");
    nguoi2.print();

    return 0;
}