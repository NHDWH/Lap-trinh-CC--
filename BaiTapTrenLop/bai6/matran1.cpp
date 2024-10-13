#include <iostream>
using namespace std;

int main()
{
    int m = 0, n = 0;
    while ((n <= 0)|(m <= 0))
    {
        cout << "Xin moi so hang: ";
        cin >> m;
        cout << endl;

        cout << "Xin moi so cot: ";
        cin >> n;
        cout << endl;
    }

    int **mt;
    mt = new int*[m]; // tạo ra pointer chỉ tới hàng

    int i, j;
    // khởi tạo cột theo hàng (m) cột (n)
    for (i = 0; i < m; i++)
            mt[i] = new int [n];
    for (i = 0; i < m; i++)
        {
            cout << "Xin moi nhap hang thu " << i << ": ";
            for (j = 0; j < n; j++)
            {
                cin >> mt[i][j];
            }
            cout << endl; // kết thúc 1 hàng
        }
    
    // hiển thị giá trị ma trận
    for (i = 0 ; i < m; i++)
        {
            cout << "Hang thu " << i << ": ";
            for (j = 0; j < n; j++)
            {
                cout << mt[i][j] << "    ";
            }
            cout << endl; //kết thúc 1 hàng
        }
    
    return 0;
}