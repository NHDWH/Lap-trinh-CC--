#include <iostream>
#include <stack> // sử dụng thư viện stack
using namespace std;


void doicoso10sang2(int so)
{
    stack<int> st; // tạo stack
    while (so > 0)
    {
        st.push(so % 2);
        so /= 2; // chia số cho 2 sau mỗi lần lặp cho đến khi không còn lớp hơn 0
    }
    cout << "Ket qua: ";
    while (!st.empty()) // khi stack không rỗng
    {
        cout << st.top(); // in ra phần tử ở đỉnh stack
        st.pop(); // loại bỏ phần tử ở đỉnh stack 
    }
    cout << endl;
}

void doicoso10sang8(int so)
{
    stack<int> st;
    while (so > 0)
    {
        st.push(so % 8);
        so /= 8;
    }
    cout << "Ket qua: ";
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

void doicoso10sang16(int so)
{
    stack<char> st;
    while (so > 0)
    {
        int so1 = so % 16;
        if (so1 < 10)
            st.push(so1 + '0'); // Đẩy các chữ số từ 0 đến 9 vào stack
        else
            st.push(so1 - 10 + 'A'); // Đẩy các chữ số từ A đến F vào stack
        so /= 16;
    }
    
    cout << "Ket qua: ";
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

int main()
{
    cout << "Xin moi nhap lua chon sau: " << endl;
    cout << "1. Co so 10 sang co so 2." << endl;
    cout << "2. Co so 10 sang co so 8." << endl;
    cout << "3. Co so 10 sang co so 16." << endl; 
    int option=6;
    while (option > 4)
    {
        cout << "Xin moi nhap: ";
        cin >> option;
    }
    int so;
    switch (option)
    {
        case 1:
            cout << "Xin moi nhap so can doi: ";
            cin >> so;
            doicoso10sang2(so);
            break;
        case 2:
        {
            cout << "Xin moi nhap so can doi: ";
            cin >> so;
            doicoso10sang8(so);
            break;
        }
        case 3: 
        {
            cout << "Xin moi nhap so can doi: ";
            cin >> so;
            doicoso10sang16(so);
            break;
        }
        default: 
            break;
    }

return 0;

}