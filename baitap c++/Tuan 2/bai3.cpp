#include <iostream>
using namespace std;

int main ()
{
    int i, j;
    int A[3][3];
    int sum = 0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Xin moi nhap phan tu A [" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        { 
            sum += *(*(A+i)+j);
        }
    }

    cout << "Tong cac phan tu trong ma tran: " << sum << endl;

   return 0; 
}