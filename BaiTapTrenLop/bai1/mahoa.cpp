//1. Khai báo thư viện và biến
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

int main ()
{
    ifstream indata;
    ofstream outdata;
    char ch;

    indata.open("dulieu.txt");
    outdata.open("mahoa.txt");
    if (indata.is_open())
    {
        cout << "file co ton tai " << endl;
        // 2. mã hóa
        while (indata.get(ch))
        {
            ch=ch+1;
            // 3. viết vào file
            outdata << ch;
        }
        // 4. lưu file
        outdata.close();
        indata.close();
        
    }
    else
    {
        cout << "file khong ton tai " << endl;
    }
    
// giải mã hóa như mã hóa
    indata.open("mahoa.txt");
    outdata.open("giaima.txt");
    if (indata.is_open())
    {
        cout << "file co ton tai " << endl;
        // 2. mã hóa
        while (indata.get(ch))
        {
            ch=ch-1;
            // 3. viết vào file
            outdata << ch;
        }
        // 4. lưu file
        outdata.close();
        indata.close();
        
    }
    else
    {
        cout << "file khong ton tai " << endl;
    }  
    
}