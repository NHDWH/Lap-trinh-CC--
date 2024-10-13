#include <iostream>
using namespace std;

void chuyenDoiMang(int R, int C) {
    int a[R][C];
    float **M = new float *[R];

    // Nhập giá trị cho mảng hai chiều a
    cout << "Nhap gia tri cho mang 2 chieu:\n";
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    // Hiển thị mảng hai chiều a
    cout << "Ma tran mang 2 chieu:\n";
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Chuyển mảng hai chiều a thành mảng một chiều b
    int b[R * C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            b[i * C + j] = a[i][j];
        }
    }

    // Hiển thị mảng một chiều b
    cout << "Chuyen mang 2 chieu thanh mang 1 chieu:\n";
    for(int i = 0; i < R * C; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    // Cách 2: Sử dụng **M
    // Khởi tạo mảng M
    for(int i = 0; i < R; i++) {
        M[i] = new float[C];
    }

    // Nhập giá trị cho mảng hai chiều M
    cout << "\nNhap gia tri cho mang 2 chieu su dung **M:\n";
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout << "M[" << i << "][" << j << "] = ";
            cin >> M[i][j];
        }
        cout << endl;
    }

    // Hiển thị mảng hai chiều M
    cout << "Ma tran mang 2 chieu su dung **M:\n";
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }

    // Chuyển mảng hai chiều M thành mảng một chiều N
    int N[R * C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            N[i * C + j] = M[i][j];
        }
    }

    // Hiển thị mảng một chiều N
    cout << "Chuyen mang 2 chieu thanh mang 1 chieu su dung **M:\n";
    for(int i = 0; i < R * C; i++) {
        cout << N[i] << " ";
    }
    cout << endl;

    // Giải phóng bộ nhớ
    delete[] M;
}

int main() {
    int m, n;
    cout << "Xin moi nhap hang: ";
    cin >> m;
    cout << "Xin moi nhap cot: ";
    cin >> n;

    chuyenDoiMang(m, n);

    return 0;
}
