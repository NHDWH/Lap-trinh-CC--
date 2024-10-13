#include <iostream>
using namespace std;

void chuyendoiMang(int R, int C) 
{
    int a[R][C];
    float **M = new float *[R];

    // Cách 1:
    // Nhập giá trị cho mảng hai chiều a
    cout << "Nhap gia tri cho mang 2 chieu: " << endl;
    for(int i = 0; i < R; i++) 
	{
        for(int j = 0; j < C; j++) 
		{
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    // Hiển thị mảng hai chiều a
    cout << "Ma tran mang 2 chieu: " << endl;
    for(int i = 0; i < R; i++) 
	{
        for(int j = 0; j < C; j++) 
		{
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Chuyển mảng hai chiều a thành mảng một chiều b
    int b[R * C];
    for(int i = 0; i < R; i++) 
	{
        for(int j = 0; j < C; j++) 
		{
            b[i * C + j] = a[i][j];
        }
    }

    // Hiển thị mảng một chiều b
	cout << "*****************************************" << endl;
	cout << "Cach 1 " << endl;
    cout << "Chuyen mang 2 chieu thanh mang 1 chieu: " << endl;
    for(int i = 0; i < R * C; i++) 
	{
        cout << b[i] << " ";
    }
    cout << endl;

    // Cách 2: Sử dụng **M
    // Khởi tạo mảng M
    for(int i = 0; i < R; i++) 
	{
        M[i] = new float[C];
    }

    // Nhập giá trị cho mảng hai chiều M
    cout << "Nhap gia tri cho mang 2 chieu su dung **M: " << endl;
    for(int i = 0; i < R; i++) 
	{
        for(int j = 0; j < C; j++) 
		{
            cout << "M[" << i << "][" << j << "] = ";
            cin >> M[i][j];
        }
        cout << endl;
    }

    // Hiển thị mảng hai chiều M
    cout << "Ma tran mang 2 chieu su dung **M: " << endl;
    for(int i = 0; i < R; i++) 
	{
        for(int j = 0; j < C; j++) 
		{
            cout << M[i][j] << " ";
        }
        cout << endl;
    }

    // Chuyển mảng hai chiều M thành mảng một chiều N
    int N[R * C];
    for(int i = 0; i < R; i++) 
	{
        for(int j = 0; j < C; j++) 
		{
            N[i * C + j] = M[i][j];
        }
    }

    // Hiển thị mảng một chiều N
	cout << "*****************************************" << endl;
	cout << "Cach 2 " << endl;
    cout << "Chuyen mang 2 chieu thanh mang 1 chieu su dung **M: " << endl;
    for(int i = 0; i < R * C; i++) 
	{
        cout << N[i] << " ";
    }
    cout << endl;

    // Giải phóng bộ nhớ
    delete[] M;
}

int main() 
{
    int m, n;
    cout << "Xin moi nhap hang: ";
    cin >> m;
    cout << "Xin moi nhap cot: ";
    cin >> n;

    chuyendoiMang(m, n);

    return 0;
}