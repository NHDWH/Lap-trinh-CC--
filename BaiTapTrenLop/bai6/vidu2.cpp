#include <iostream>
using namespace std;

#include "fullTimeEmployee.h"
#include "partTimeEmployee.h"

int main ()
{
    fullTimeEmployee newEMP("Nguyen","Van Dung", 75, 56000, 5700);
    partTimeEmployee tempEMP("Nguyen", "Van Teo", 275, 15.50, 57);
    newEMP.print();
    cout << endl;
    tempEMP.print();
    cout << endl;
}