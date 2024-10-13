//1. Khai báo thư viện và biến
#include <iostream>
#include <fstream> //thư viện đọc
#include <string>
#include <string.h>
using namespace std;

int main ()
{
    ifstream indata;
    string line;

    //2. mở file
    indata.open("dulieu.txt");
    if (indata.is_open())
    {
        cout << "file ton tai" << endl;

        //3. đọc dữ liệu trong file bằng len getline
        while (getline(indata, line))
        {
            cout << line << endl;
        }

    indata.close(); // save as
    }
    else
    {
        cout << " file khong ton tai" << endl;
    }

    return 0;
}