#ifndef H_thisPointerClass
#define H_thisPointerClass

#include <iostream>
using namespace std;

class thisPointerClass
{
    public:
        void set(int a, int b, int c);
        void print() const;
        thisPointerClass updateXYZ();
        thisPointerClass(int a = 0, int b = 0, int c = 0);
    private:
        int x;
        int y;
        int z;
};

void thisPointerClass::set(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}

void thisPointerClass::print() const
{
    cout << "******************* " << endl;
    cout << "Thanh phan so 1: " << x << endl;
    cout << "Thanh phan so 2: " << y << endl;
    cout << "Thanh phan so 3: " << z << endl;
}

thisPointerClass thisPointerClass::updateXYZ()
{
    x = 2 * x;
    y = y + 2;
    z = z * z;
    return *this;
}

thisPointerClass::thisPointerClass(int a, int b, int c):x(a), y(b), z(c){}

#endif