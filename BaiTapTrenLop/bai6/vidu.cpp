#include <iostream>
using namespace std;

#include "pettype.h"
#include "dogtype.h"

int main()
{
    petType contho("Rabbit");
    dogType concho("Lucky","Vang");

    contho.print();
    cout << "******************************"<< endl;
    concho.print();

    return 0;
} 