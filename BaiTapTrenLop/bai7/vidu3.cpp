#include <iostream>
using namespace std;

#include "rectangleType.h"

int main()
{
    rectangleType hinhchunhat1 (1.5, 6.5);
    hinhchunhat1.print();

    rectangleType hinhchunhat2 (4.8, 9.6);
    rectangleType hinhchunhat3;
    rectangleType hinhchunhat4;

    cout << "Hinh chu nhat so 3 truoc khi cong " << endl;
    hinhchunhat3.print();
    cout << "********HCN so 3 sau khi cong " << endl;
    hinhchunhat3 = hinhchunhat1 + hinhchunhat2;
    hinhchunhat3.print();

    cout << "Hinh chu nhat so 4 truoc khi tru " << endl;
    hinhchunhat4.print();
    cout << "********HCN so 4 sau khi tru " << endl;
    hinhchunhat4 = hinhchunhat1 - hinhchunhat2;
    hinhchunhat4.print();

    if(hinhchunhat1==hinhchunhat2)
    {
        cout << "hai hinh chu nhat bang nhau" << endl;
    }
    else
    {
        cout << "hai hinh chu nha KHONG bang nhau" << endl;
    }
    
    return 0;
}