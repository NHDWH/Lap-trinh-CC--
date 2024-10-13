#include <iostream>
using namespace std;

int main()
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

        string canhbao = " Ba da nhap ky tu ";
        if (sochia == 0)
            throw sochia;
        else if (sochia < 0)
            throw string (" Ban da chia so am kia. ");
        else if (!cin)
            throw canhbao;
        
        thuong = sobichia/sochia;
        cout << "Thuong cua " << sobichia << " va " << sochia << " : " << thuong << endl;
    }

    catch (int x)
    {
        cout << "---------WARMING!!!---------" << endl;
        cout << " Ban da chia cho zero: " << sochia << endl;
    }

    catch (string s)
    {
        cout << "---------WARMING!!!---------" << endl;
        cout << s << endl;
    }

    return 0;
}