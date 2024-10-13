//1. Khai báo thư viện và biến
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <iomanip>
using namespace std;

int main ()
{
    ifstream indata("bangdiem.txt");
    ofstream outdata("ghidiem.txt");
    string ho, lot, ten;
    double toan, ly, hoa, van;
    double trungbinh;

    if (indata.is_open())
    {
        cout << "file ton tai " << endl;

        //2. đọc dữ liệu và ghi vào biến
        indata >> ho >> lot >> ten >> toan >> ly >> hoa >> van;
        while (indata) // đọc đến dòng cuối cùng
        {
            trungbinh=(toan + ly + hoa + van) / 4;
            //5. phiếu điểm hiển thị màn hình
            cout << "************************************" << endl;
            cout << "Ho va ten: " << ho << " " << lot << " " << ten << endl;
            cout << "Diem mon Toan: " << setw(10) << toan << endl;
            cout << "Diem mon Ly: " << setw(12) << ly << endl;
            cout << "Diem mon Hoa: " << setw(11) << hoa << endl;
            cout << "Diem mon Van: " << setw(11) << van << endl;
            cout << "Diem trung binh: " << setw(8) << trungbinh << endl;

            //6. lưu vào file ghi điểm .txt
            outdata << "************************************" << endl;
            outdata << "Ho va ten: " << ho << " " << lot << " " << ten << endl;
            outdata << "Diem mon Toan: " << setw(10) << toan << endl;
            outdata << "Diem mon Ly: " << setw(12) << ly << endl;
            outdata << "Diem mon Hoa: " << setw(11) << hoa << endl;
            outdata << "Diem mon Van: " << setw(11) << van << endl;
            outdata << "Diem trung binh: " << setw(8) << trungbinh << endl;
            indata >> ho >> lot >> ten >> toan >> ly >> hoa >> van; // dòng kế tiếp
        }
        indata.close();
        outdata.close();
    }
    else
    {
        cout << "File khong ton tai " << endl;
    }
}