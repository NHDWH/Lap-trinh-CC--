#include <iostream>
#include <vector>
using namespace std;

void bubblesort(vector <int> &List, int chieudai)
{
    for (int i = 0 ; i < chieudai - 1; i++)
    {
        for (int j = i + 1; j < chieudai; j++)
        {
            if (List[i] > List[j])
            {
                int temp = List[i];
                List[i] = List[j];
                List[j] = temp;
            }
        }
    }
}

int main()
{
    // Task 1: sử dụng vector để tạo giá trị nhập vào từ bàn phím
    int Index = 1;              //Optional (Biến số thứ tự để trang trí)
    int chieudai = 0;
    int c;
    vector <int> List;          // Vector để lưu dãy số, Vector có thể tuỳ ý thay đổi kíck thước cho khỏi tốn tài nguyên
    
    cout << "Nhap so vao danh sach:     (Nhap 999 de thoat)" << endl;
    while (c!=999)
    {
        cout << Index << ". ";  //Optional (Hiển thị số thứ tự khi nhập VD: 1._   2._ )
        cin >> c;
        if (c != 999)                                      
        {
            List.push_back(c);
        }
        Index++;                //Optional (tăng số Index cho đẹp)
    }
    chieudai=List.size();       // Lấy chiều dài của dãy số (VD: nhập 5 số thì chiều dài = 5)

    cout << endl << "*****************************************************************************" << endl;
    cout << "Chieu dai cua danh sach can sap xep: " << chieudai << endl;

    // Task 2: viết hàm bubble sort
    bubblesort(List, chieudai);

    // Task 3: Hiển thị kết quả sau khi sắp xếp
    cout << endl << "*****************************************************************************" << endl;
    cout << "Danh sach da sap xep: " << endl;
    for (int i = 0; i < chieudai; i++)
    {
        cout << List[i] << " " << endl;
    }
    return 0;
}