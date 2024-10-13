#include <iostream>
#include <string>

using namespace std;

int main() {
    struct SinhVien {
        string hoTen;
        int soThuTu, lop, maSV;
    };

    SinhVien hocSinh[5];

    // Nhập dữ liệu của 5 em sinh viên
    for (int i = 0; i < 5; i++) {
        cout << "Nhap ho ten sinh vien thu " << i + 1 << ": ";
        cin >> hocSinh[i].hoTen;

        cout << "Nhap so thu tu: ";
        cin >> hocSinh[i].soThuTu;

        cout << "Nhap lop: ";
        cin >> hocSinh[i].lop;

        cout << "Nhap ma sinh vien: ";
        cin >> hocSinh[i].maSV;
    }

    // Xuất ra màn hình bảng thông tin của 5 em sinh viên
    cout << "\t\tBAN GA CUA 5 SINH VIEN\n";
    cout << "----------------------------------------------------------------------------------\n";
    cout << "| STT | HO TEN |  LOP |   MA SV   |\n";
    cout << "----------------------------------------------------------------------------------\n";

    for (int i = 0; i < 5; i++) {
        cout << "|   " << hocSinh[i].soThuTu << "   | " << hocSinh[i].hoTen << "   |   " << hocSinh[i].lop << "   |   " << hocSinh[i].maSV << "   |\n";
    }
    cout << "----------------------------------------------------------------------------------\n";

    return 0;
}