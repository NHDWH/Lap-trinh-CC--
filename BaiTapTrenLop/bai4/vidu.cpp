#include <iostream>
using namespace std;

#include "personType.h"

#include "partTimeEmployee.h"

#include "personalInfo.h"

int main()
{
    personType nguoi("Nguyen", "Cu Ty");
    nguoi.print();

    cout <<" *************************************** " << endl;

    partTimeEmployee laodong("Nguyen","Van Teo", 25, 48);
    laodong.print();


    cout <<" *************************************** " << endl;
    personalInfo sinhvien("Ho","Van Tung", 12, 5, 2006, 258);
    sinhvien.printpersonalInfo();

    return 0;
}