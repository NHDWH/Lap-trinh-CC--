#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

template <typename T>
class sinhvien
{
    private:
        string hoten;
        T diemGPA;
    public:
        sinhvien(string a, T gpa):hoten(a), diemGPA(gpa){};
        void print()
        {
            cout << " **************************** " << endl;
            cout << " Ho va ten: " << hoten << endl;
            cout << " Diem trung binh: " << diemGPA << endl;
            cout << " Type dinh dang: " << typeid(diemGPA).name() << endl;
        }
};

int main()
{
    sinhvien <double> sva("Tam", 7.89);
    sva.print();
    sinhvien <int> svb("Teo", 2);
    svb.print();

    return 0;
}