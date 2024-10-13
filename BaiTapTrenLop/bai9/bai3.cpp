#include <iostream>
#include <string>

#include "canhbao.h"
using namespace std;

void tinhchia() throw (canhbao);
int main()
{
    try
    {
        tinhchia();
    }
    catch(canhbao bien)
    {
        bien.what();
    }

    return 0;
}

void tinhchia() throw (canhbao)
{
    int sochia, sobichia, thuong;

        cout << " Xin moi nhap so bi chia: ";
        cin >> sobichia;
        cout << endl;

        cout << " Xin moi nhap so chia: ";
        cin >> sochia;
        cout << endl;

        if (sochia == 0)
            throw canhbao();
        if (sochia < 0)
            throw canhbao(" Ban da chia cho so am");
        
        thuong = sobichia/sochia;
        cout << " Thuong cua " << sobichia << " va " << sochia << " : " << thuong << endl;
}