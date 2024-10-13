//1. Khai báo thư viện và biến
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

int main ()
{
    ofstream outdata;
    // 2. đọc file, nếu file chưa có, c++ sẽ tự tạo file
    outdata.open("sinhvien.txt");
    string line="Hung Vuong TpHCM, Hello";

    // 3. Viết dữ liệu vào file
    outdata << line;

    // 4. lưu file close
    outdata.close();

    return 0;
}