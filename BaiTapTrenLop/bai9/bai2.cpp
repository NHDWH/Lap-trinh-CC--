#include <iostream>
#include <string>

#include "canhbao.h"
using namespace std;

int main ()
{
    int sochia, sobichia, thuong;
    try
    {
        cout << " Xin moi nhap so bi chia: ";
        cin >> sobichia;
        cout << endl;

        cout << " Xin moi nhap so chia: ";
        cin >> sochia;
        cout << endl;

        if (sochia == 0)
            throw canhbao();
        if (sochia < 0)
            throw canhbao(" Ban da chia so am.");
        
        thuong = sobichia/sochia;
        cout << "Thuong cua " << sobichia << " va " << sochia << " : " << thuong << endl;
    
    }
    catch (canhbao bien)
    {
        bien.what();
    }

    return 0;
}