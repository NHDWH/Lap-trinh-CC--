#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

struct SinhVienDHV {
    int stt;
    char Ho[20];
    string Ten;
    char Lop[10];
    char MSSV[10];
};

int main() 
{
    SinhVienDHV dsSV[5];

    for (int i = 0; i < 5; i++) 
    {
        cout << "Nhap thong tin sinh vien thu " << i+1 << ": " << endl;
        cout << "STT: ";
        cin  >> dsSV[i].stt;

        cout << "Ho: ";
        cin >> dsSV[i].Ho;

        cout << "Ten: ";
        cin >> dsSV[i].Ten;

        cout << "Lop: ";
        cin >> dsSV[i].Lop;

        cout << "Ma sinh vien: ";
        cin >> dsSV[i].MSSV;
    }

    cout << left << setw(15) << "STT" << setw(20) << "Ho" << setw(20) << "Ten" << setw(15) << "Lop" << right << setw(20) << "Ma sinh vien" << endl;
    cout << setfill ('.');
    for (int i = 0; i < 5; i++) {
        cout << left << setw(15) << dsSV[i].stt;
        cout << left << setw(20) << dsSV[i].Ho; 
        cout << left << setw(20) << dsSV[i].Ten; 
        cout << left << setw(15) << dsSV[i].Lop; 
        cout << right << setw(20) << dsSV[i].MSSV << endl;
    }

    return 0;
}