#include <iostream>
using namespace std;

template <class T>
class cong
{
    public:
        cong(T a, T b)
        {
            x = a;
            y = b;
        }
        //
        // cong(T a, T b):x(a), y(b){}; // Tương đương 4 dòng trên
        T phepcong()
        {
            return x + y;
        }
    private:
        T x;
        T y;
};

int main()
{
    cong <int> so1 (5, 9);
    cout << " Ket qua cong 2 so int : " << so1.phepcong() << endl;

    cong <double> so2 (5.6, 8.9);
    cout << " Ket qua cong 2 so double : " << so2.phepcong() << endl;

    cong <float> so3 (7.8, 9.10);
    cout << " Ket qua cong 2 so float : " << so3.phepcong() << endl;

    return 0;
}