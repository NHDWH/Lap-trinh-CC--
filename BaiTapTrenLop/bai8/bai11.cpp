#include <iostream>
using namespace std;

template <class T>
class maytinh
{
    public:
        maytinh(T a, T b)
        {
            x = a;
            y = b;
        }
        //
        // maytinh(T a, T b):x(a),y(b){}; // Tương đương 4 dòng trên
        T phepcong()
        {
            return x + y;
        }
        T pheptru()
        {
            return x - y;
        }
        T phepnhan()
        {
            return x * y;
        }
        T phepchia()
        {
            return x / y;
        }
        void print()
        {
            cout << "*************************" << endl;
            cout << " Phep cong " << x << " va " << y << " : " << phepcong() << endl;
            cout << " Phep tru " << x << " va " << y << " : " << pheptru() << endl;
            cout << " Phep nhan " << x << " va " << y << " : " << phepnhan() << endl;
            cout << " Phep chia " << x << " va " << y << " : " << phepchia() << endl; 
        }
    private:
        T x;
        T y;
};

int main()
{
    maytinh <int> phep1(17, 89);
    phep1.print();

    maytinh <float> phep2(17.89, 15.5);
    phep2.print();
    
    return 0;
}