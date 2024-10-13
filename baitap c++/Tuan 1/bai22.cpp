#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x, y;  
    float soga, soheo; 

    cout << "Xin moi nhap so ga va heo: ";
    cin >> x;

    cout << "Xin moi nhap so chan: ";
    cin >> y;

    if (floor(x)==x && floor(y)==y)
    {
        soga = (4 * floor(x) - floor(y)) / 2;
        soheo = (floor(y) - 2 * floor(x)) / 2;
    }
    
    if (soga <= 0 || soheo <= 0 || floor(soga)!=soga || floor(soheo)!=soheo) 
    {
        return 1;
    }

    cout << "So ga co la: " << soga << endl;
    cout << "So heo co la: " << soheo << endl;

    return 0;
    
}