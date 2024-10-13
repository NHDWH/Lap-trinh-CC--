#include <iostream>
using namespace std;

#include "thisPointerClass.h"

int main()
{
    thisPointerClass giatri1(10, 14, 28);
    thisPointerClass giatri2;

    giatri1.print();
    cout << "gia tri 2 truoc khi cap nhat " << endl;
    giatri2.print();
    cout << "bay gio cap nhat gia tri 2 " << endl;
    giatri2 = giatri1.updateXYZ();
    giatri2.print();

    cout << "bay gio cap nhat gia tri 1" << endl;
    giatri1.print();

    return 0;
}