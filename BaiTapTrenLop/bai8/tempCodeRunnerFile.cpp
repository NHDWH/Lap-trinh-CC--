#include <iostream>
#include <string>
using namespace std;

template <class T>
class sosanh
{
    private:
        T x;
        T y;
        T z;
    public:
        sosanh(T a, T b, T c):x(a), y(b), z(c){};
        void sort()
        {
            T temp;
            if (x > y)
            {
                temp = x;
                x = y;
                y = temp;
            }
            if (x > z)
            {
                temp = x;
                x = z;
                z = temp;
            }
            if (y > z)
            {
                temp = y;
                y = z;
                z = temp;
            }
        }
        void print()
        {
            sort();
            cout << "********************************* " << endl;
            cout << "Xep tu be toi lon, a - z " << endl;
            cout << x << endl;
            cout << y << endl;
            cout << z << endl;
        }
};

int main()
{
    sosanh <double> dayso (2539, 0, -2560);
    dayso.print();

    string xstr = "abcd, ABC, xzy ";
    string ystr = "abc @ example . com! ";
    string zstr = "(from the \"Page of 123\") "; // dấu () < hơn chữ a

    sosanh <string> chuoi(xstr, ystr, zstr);
    chuoi.print();

    float xnf = 100.3f, ynf = -36.5f, znf = 12.15f;
    sosanh <float> dayle(xnf, ynf, znf);
    dayle.print();

    return 0;
}