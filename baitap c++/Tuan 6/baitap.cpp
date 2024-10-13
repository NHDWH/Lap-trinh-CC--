#include <iostream>
using namespace std;

// Định nghĩa cấu trúc của một node trong danh sách liên kết đơn
struct Node 
{
    int data;
    Node* next;
    
    // Constructor để tạo một node mới với dữ liệu cho trước
    Node(int value) 
    {
        data = value;
        next = nullptr;
    }
};

// Hàm để in ra toàn bộ danh sách liên kết
void printList(Node* head) 
{
    Node* current = head;
    while (current != nullptr) 
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Câu 2: Hàm để thêm một node vào đầu danh sách liên kết
void addToHead(Node*& head, int value) 
{
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// Câu 3: Hàm để thêm một node vào cuối danh sách liên kết
void addToTail(Node*& head, int value)
{
    Node* newNode = new Node(value);
    if (head == nullptr) 
    {
        head = newNode;
    } 
    else 
    {
        Node* current = head;
        while (current->next != nullptr) 
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Câu 4: Hàm để xóa một node tại vị trí cho trước (1-indexed)
void deleteNodeAtIndex(Node*& head, int index) 
{
    if (head == nullptr)
        return;

    if (index == 1) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    int count = 1;
    while (current != nullptr && count < index - 1) 
    {
        current = current->next;
        count++;
    }

    if (current == nullptr || current->next == nullptr) 
    {
        cout << "Khong the xoa, vi tri khong hop le." << endl;
        return;
    }

    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
}

int main() 
{
    // Tạo danh sách node từ mảng GiaTriKhoiTao
    int GiaTriKhoiTao[] = {13, 11, 9, 7, 5, 3, 1};
    int Size = sizeof(GiaTriKhoiTao) / sizeof(GiaTriKhoiTao[0]);

    Node* head = nullptr;  // Khởi tạo danh sách rỗng

    // Tạo danh sách liên kết đơn từ mảng GiaTriKhoiTao
    for (int i = 0; i < Size; i++) 
    {
        addToTail(head, GiaTriKhoiTao[i]);
    }

    // In danh sách ban đầu
    cout << "\n" << endl;
    cout << "Danh sach ban dau: ";
    printList(head);

    // 2) Thêm 1 node vào đầu danh sách: 2 13 11 9 7 5 3 1
    addToHead(head, 2);
    cout << "*****************************************************" << endl;
    cout << "Sau khi them node vao dau: ";
    printList(head);

    // 3) Thêm 1 node vào cuối danh sách: 2 13 11 9 7 5 3 1 8
    addToTail(head, 8);
    cout << "*****************************************************" << endl;
    cout << "Sau khi them node vao cuoi: ";
    printList(head);

    // 4) Hiển thị giá trị của 2 node giữa (nếu có)
    Node* slow = head;
    Node* fast = head;
    Node* middle1 = nullptr;
    Node* middle2 = nullptr;

    if (head != nullptr) 
    {
        while (fast != nullptr && fast->next != nullptr) 
        {
            fast = fast->next->next;
            middle1 = slow;
            slow = slow->next;
        }

        // slow hiện tại chính là node giữa thứ 2
        middle2 = slow;

        // Nếu danh sách có độ dài lẻ, in ra 2 node giữa
        if (fast == nullptr) 
        {
            cout << "*****************************************************" << endl;
            cout << "Gia tri cua 2 node giua: " << middle1->data << " " << middle2->data << endl;
        }
        // Nếu danh sách có độ dài chẵn, in ra cả hai giá trị của node giữa
        else 
        {
            cout << "*****************************************************" << endl;
            cout << "Gia tri cua 2 node giua: " << middle1->data << " " << middle2->data << endl;
        }
    }

    // 5) Xóa node thứ 4 (node 3)
    deleteNodeAtIndex(head, 4);
    cout << "*****************************************************" << endl;
    cout << "Sau khi xoa node thu 4: ";
    printList(head);
    cout << "\n" << endl;

    // Giải phóng bộ nhớ
    Node* current = head;
    while (current != nullptr) 
    {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;

    return 0;
}