#include <iostream>
#include <cmath>
using namespace std;

class tamgiacvuong
{
    public:
        tamgiacvuong();
        tamgiacvuong(int a, int b);
        double tinhcanhhuyen();
        double chuvi();
        double dientich();
        void print();
        tamgiacvuong operator + (const tamgiacvuong& tamgiac) const;
        tamgiacvuong operator - (const tamgiacvuong& tamgiac) const;
    private:
        int canha;
        int canhb;
};

tamgiacvuong::tamgiacvuong()
{
   int a = 0;
   int b = 0; 
}

tamgiacvuong::tamgiacvuong(int a, int b)
{
    canha = a;
    canhb = b;
}

double tamgiacvuong::tinhcanhhuyen()
{
    return sqrt(canha * canha + canhb * canhb);
}

double tamgiacvuong::chuvi()
{
    return canha + canhb + tinhcanhhuyen();
}

double tamgiacvuong::dientich()
{
    return (canha * canhb) / 2;
}

void tamgiacvuong::print()
{
    cout << "Canh a: " << canha << endl;
    cout << "Canh b: " << canhb << endl;
    cout << "Canh huyen la: " << tinhcanhhuyen() << endl;
    cout << "Chu vi la: " << chuvi() << endl;
    cout << "Dien tich la: " << dientich() << endl;
}

tamgiacvuong tamgiacvuong::operator+ (const tamgiacvuong& tamgiac) const
{
    tamgiacvuong kq;
    kq.canha = canha + tamgiac.canha;
    kq.canhb = canhb + tamgiac.canhb;
    return kq;
}

tamgiacvuong tamgiacvuong::operator - (const tamgiacvuong& tamgiac) const
{
    tamgiacvuong kq;
    kq.canha = canha - tamgiac.canha;
    kq.canhb = canhb - tamgiac.canhb;
    return kq;
}

int main()
{
    tamgiacvuong tamgiac1(3, 7);
    cout << "******Tam giac vuong 1: " << endl;
    tamgiac1.print();
    tamgiacvuong tamgiac2(4, 5);
    cout << "******Tam giac vuong 2: " << endl;
    tamgiac2.print();
    tamgiacvuong tamgiac3;
    cout << "******Ket qua phep cong" << endl;
    tamgiac3 = tamgiac1 + tamgiac2;
    tamgiac3.print();
    tamgiacvuong tamgiac4;
    cout << "*******Ket qua phep tru: " << endl;
    tamgiac4 = tamgiac1 - tamgiac2;
    tamgiac4.print();

    return 0;
}