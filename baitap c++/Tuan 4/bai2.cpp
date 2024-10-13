#include <iostream> // kiểm tra lại xem và note mấy đoạn chưa hiểu
using namespace std; 

struct sophuc
{
    double sothuc;
    double soao;
};
    void DisplaySP(sophuc ketqua) // chưa hiểu khúc này
    {
        cout << "So Thuc: " << ketqua.sothuc << endl;
        cout << "So Phuc: " << ketqua.soao << endl;
    }

    sophuc SetSP (double R, double I) // cả cái này
    {
        sophuc ketqua;
        ketqua.sothuc = R;
        ketqua.soao = I;
        return ketqua;
    }

    sophuc operator + (sophuc a, sophuc b)
    {
        sophuc ketqua;
        ketqua.sothuc = a.sothuc + b.sothuc;
        ketqua.soao = a.soao + b.soao;
        return ketqua;
    }

    sophuc operator - (sophuc a, sophuc b)
    {
        sophuc ketqua;
        ketqua.sothuc = a.sothuc - b.sothuc;
        ketqua.soao = a.soao - b.soao;
        return ketqua;
    }

    sophuc operator * (sophuc a, sophuc b)
    {
        sophuc ketqua;
        ketqua.sothuc = a.sothuc * b.sothuc - a.soao * b.soao;
        ketqua.soao = a.sothuc * b.soao + a.soao * b.sothuc;
        return ketqua;
    }

    sophuc operator / (sophuc a, sophuc b)
    {
        sophuc ketqua;
        double mau = (b.sothuc * b.sothuc) + (b.soao * b.soao);
        ketqua.sothuc = (a.sothuc * b.sothuc + a.soao * b.soao) / mau;
        ketqua.soao = (a.soao * b.sothuc - a.sothuc * b.soao)/mau;
        return ketqua;
    }


int main()
{
    sophuc a, b, c, d, e, f;
    a = SetSP(5.0, -7.0);
    b = SetSP(4.0, 2.0);
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;

    cout << "Ket qua phep cong la: " << endl;
    DisplaySP(c); // cái này
    cout << endl;

    cout << "Ket qua phep tru la: " << endl;
    DisplaySP(d); // cái này
    cout << endl;

    cout << "Ket qua phep nhan la: " << endl;
    DisplaySP(e); // cái này
    cout << endl;

    cout << "Ket qua phep chia la: " << endl;
    DisplaySP(f); // cái này
    cout << endl;   
}