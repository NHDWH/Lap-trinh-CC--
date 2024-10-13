#include <iostream>
using namespace std;

// Khai báo cấu trúc Node cho danh sách liên kết đôi
struct Node 
{
    int data;
    Node* prev;
    Node* next;
};

// Hàm tạo danh sách liên kết
void TaoDanhSach(Node *&head)
{
    int array[8] = {8, 7, 9, 1, 2, 12, 10, 4};
    int size = sizeof(array) / sizeof(array[0]);

    Node *current = head;

    // Tạo các nút từ mảng và liên kết chúng
    for (int i = 0; i < size; i++)
    { 
        Node *newNode = new Node;
        newNode->data = array[i];
        newNode->prev = nullptr;
        newNode->next = nullptr;

        if (head == current)
        {
            // Nếu là nút đầu tiên
            head->next = newNode;
            newNode->prev = head;
            newNode->next = head;
            head->prev = newNode;
            current = newNode;
        }
        else
        {
            // Liên kết vào cuối danh sách hiện tại
            newNode->prev = current;
            current->next = newNode;
            newNode->next = head;
            head->prev = newNode;
            current = newNode;
        }
    }

    // In danh sách đã tạo
    cout << "Da tao thanh cong danh sach." << endl;
    Node *to = head->next;
    while (to != head)
    {
        cout << to->data << " ";
        to = to->next;
    }
    cout << endl;
}

// Hàm tìm kiếm một phần tử trong danh sách liên kết
void TimKiem(Node *&head)
{
    int Input, Index = 1;
    cout << "Xin moi nhap phan tu can tim kiem: ";
    cin >> Input;

    Node *current = head->next;
    while (current != head)
    {
        if (current->data == Input)
        {
            cout << "Da tim thay phan tu " << Input << " tai vi tri " << Index << endl;
            return;
        }
        else
        {
            current = current->next;
            Index++;
        }
    }

    cout << "Khong tim thay phan tu " << Input << " trong danh sach." << endl;
}

// Hàm chèn một phần tử vào danh sách liên kết tại vị trí chỉ định
void ThemPhanTu(Node *&head)
{
    int viTri, giaTri;
    cout << "Xin moi nhap vi tri can them vao: ";
    cin >> viTri;
    cout << "Xin moi nhap gia tri can them vao: ";
    cin >> giaTri;

    Node *newNode = new Node;
    newNode->data = giaTri;

    Node *current = head;
    int currentIndex = 1;

    // Tìm vị trí để chèn newNode
    while (current != head && currentIndex < viTri)
    {
        current = current->next;
        currentIndex++;
    }

    // Chèn newNode vào danh sách
    newNode->prev = current;
    newNode->next = current->next;
    current->next->prev = newNode;
    current->next = newNode;

    cout << "Da them phan tu " << giaTri << " vao vi tri " << viTri << endl;

    cout << endl;
}

// Hàm xóa một phần tử từ danh sách liên kết tại vị trí chỉ định
void XoaPhanTu(Node *&head)
{
    int viTri;
    cout << "Xin moi nhap vi tri can xoa: ";
    cin >> viTri;

    Node *current = head->next;
    int currentIndex = 1;

    // Tìm vị trí để xóa
    while (current != head && currentIndex < viTri)
    {
        current = current->next;
        currentIndex++;
    }

    if (current == head) // Vị trí không hợp lệ
    {
        cout << "Vi tri can xoa khong hop le" << endl;
        return;
    }

    // Xóa nút tại vị trí đã tìm thấy
    current->prev->next = current->next;
    current->next->prev = current->prev;
    delete current;

    cout << "Da xoa phan tu tai vi tri " << viTri << endl;
}

// Hàm xóa tất cả các phần tử trong danh sách liên kết
void XoaTatCa(Node *&head)
{
    Node *current = head->next;
    while (current != head)
    {
        Node *temp = current;
        current = current->next;
        delete temp;
    }
    head->prev = head;
    head->next = head;

    cout << "Da xoa tat ca phan tu trong danh sach" << endl;
}

int main()
{
    cout << "Xin moi nhap lua chon sau: " << endl; 
    cout << "1. Tao day lien ket." << endl; 
    cout << "2. Tim phan tu trong day." << endl; 
    cout << "3. Them phan tu vao trong day." << endl; 
    cout << "4. Xoa phan tu trong day." << endl; 
    cout << "5. Xoa tat ca phan tu." << endl; 

    int option = 6;
    Node *head = new Node;
    head->prev = head;
    head->next = head;

    while (option > 5)
    {
        cout << "Xin moi nhap: ";
        cin >> option;
    }

    switch (option)
    {
    case 1:
        TaoDanhSach(head);
        break;
    case 2:
        TaoDanhSach(head);
        cout << endl;
        TimKiem(head);
        break;
    case 3:
        ThemPhanTu(head);
        break;
    case 4:
        XoaPhanTu(head);
        break;
    case 5:
        XoaTatCa(head);
        break;
    default:
        break;
    }

    // Giải phóng bộ nhớ bằng cách xóa nút head
    delete head;

    return 0;
}