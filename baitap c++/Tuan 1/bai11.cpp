#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string a;
    
    cout << "Xin moi nhap a: ";
    cin >> a;
    
    int S = 0;
    for(int i = 0; i < a.length(); i++)
    {
        S += (a[i]-'0') * pow(2,a.length()-i-1);
    }

    cout << "So thap phan la: " << S;

    return 0;
}