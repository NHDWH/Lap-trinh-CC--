#include <iostream>
using namespace std;

template <class T, class V, class U = char>
class tonghop
{
    private:
        T x;
        V y;
        U c;
    public:
        tonghop(T a, V b, U m):x(a), y(b), c(m){};
        void print()
        {
            cout << "*************************" << endl;
            cout << " Bien 1: " << x << endl;
            cout << " Bien 2: " << y << endl;
            cout << " Bien 3: " << c << endl;
        }
};

int main()
{
    tonghop <int, double> so1(18, 20.6, 'M');
    so1.print();

    tonghop <int, bool, double> so2(17, true, 19.7);
    so2.print();

    return 0;
}