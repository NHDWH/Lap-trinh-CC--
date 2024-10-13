#include <iostream>
using namespace std;

template <class T, class V>
class pheptoan
{
    private:
        T x;
        V y;
    public:
        pheptoan(T a, V b):x(a), y(b){};
        T phepcong()
        {
            return x + y;
        }
        V phepcong2()
        {
            return x + y;
        }
        void print()
        {
            cout << "*********************" << endl;
            cout << " Phep cong theo gia tri x " << x << " va " << y << " : " << phepcong() << endl;
            cout << " Phep cong theo gia tri y " << x << " va " << y << " : " << phepcong2() << endl;
        }
};

int main()
{
    pheptoan <int, int> phep1(18, 25);
    phep1.print();

    pheptoan <int, float> phep2(18, 20.9);
    phep2.print();

    return 0;
}