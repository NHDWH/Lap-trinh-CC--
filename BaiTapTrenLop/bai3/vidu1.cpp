#include <iostream>
using namespace std;

#include "hinhchunhat.h"

int main()
{
    rectangleType hinh1;
    hinh1.print();

    cout << "***************************" << endl;
    rectangleType hinh2(14.8, 15.9);
    hinh2.print();

    return 0;
}