#include <iostream>
using namespace std;

int main() {
    int a, b, choice;
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;
    cout << "Chon mot so tu 1 den 4: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Tong la: " << a + b << endl;
            break;
        case 2:
            cout << "Hieu la: " << a - b << endl;
            break;
        case 3:
            cout << "Gia tri lon nhat la: " << max(a, b) << endl;
            break;
        case 4:
            cout << "Gia tri nho nhat la: " << min(a, b) << endl;
            break;
        default:
            cout << "Lua chon khong hop le." << endl;
    }

    return 0;
}