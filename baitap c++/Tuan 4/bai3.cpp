#include <iostream> // xem lại bài này
using namespace std;

void BubbleSort(int arr[])
{
    for (int i = 0; i < 9 - 1; i++)             // Kiểm tra nếu i bé hơn chiều dài của dãy số
        {
            for (int j = i + 1; j < 9; j++)
            {
                if (arr[i] > arr[j])                 // Nếu GIÁ TRỊ của số đầu > số sau
                {
                    int tmp = arr[i];              // Biến tạm để chứa i 
                    arr[i] = arr[j];                 // i rỗng chứa j
                    arr[j] = tmp;                  // j rỗng chứa biến tạm (i)
                }
            }
        }
}

int BinarySearch(int arr[], int trai, int phai, int socantim)
{
    while (trai <= phai) 
    {
        int mid = trai + (phai - trai) / 2;
        if (arr[mid] == socantim) 
        {
            return mid;
        }
        if (arr[mid] < socantim) 
        {
            trai = mid + 1; // Tìm kiếm nửa bên phải
        } 
        else 
        {
            phai = mid - 1; // Tìm kiếm nửa bên trái
        }
    }
    return -1;
}

int main()
{
    int arr[9] = {1, 4, 2, 3, 6, 5, 8, 9, 7};
    int Size = sizeof(arr) / sizeof(arr[0]);
    int i;

    // Sắp xếp mảng
    BubbleSort(arr);
    cout << "Mang da duoc sap xep: ";
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl; 

    // Tìm kiếm Bằng Phương Pháp Nhị Phân
    cout << "Moi nhap so de tim kiem: ";
    cin >> i;
    int ketqua = BinarySearch(arr, 0, Size - 1, i);
    if (ketqua != -1)
    {
        cout << "Vi tri cua so [" << i << "] tai vi tri: " << ketqua << endl;
    }
    else 
    {
        cout << "Khong tim thay " << endl;
    }
    return 0;
}