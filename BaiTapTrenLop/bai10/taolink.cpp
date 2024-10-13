//-----------------------------------
// Tạo mới chuỗi link 2 15 8 24 34
// node : data -- link
// ----------------------------------

#include <iostream>
using namespace std;

int a[5] = {2, 15, 8, 24, 34};

struct nodeType
{
    int info;
    nodeType *link;
};

int main()
{
    nodeType *first, *last, *newnode;

    //step 1: first = last = NULL
    first = NULL;
    last = NULL;

    //step 2: lấy phần tử trong array a
    int num;
    int i = 0;
    while (i < 5)
    {
        // tạo node mới
        newnode = new nodeType;
        num = a[i];
        newnode -> info = num;
        newnode -> link = NULL;
        if (first == NULL) // node đầu tiên
        {
            first = newnode;
            last = newnode;
        }
        else
        {
            last -> link = newnode;
            last = newnode;
        }
        i = ++i; 
    }
    
    nodeType *current, *head;
    head = first;
    current = head;
    while (current != NULL)
    {
        cout << current -> info << " ";
        current = current -> link;
    }

    // chèn số 0 vào đầu node

    // tạo node mới
    newnode = new nodeType;
    newnode -> info = 0;
    newnode -> link = NULL;

    // tạo kết nối
    newnode -> link = head;
    head = newnode;
    first = newnode;

    // hiển thị giá trị trong node
    cout << endl;
    cout << " " << endl;
    current = head;
    while (current != NULL)
    {
        cout << current -> info << " ";
        current = current -> link;
    }

    cout << endl;

    //----------------
    // chèn 99 vào node cuối cùng
    // pointer last
    // pointer current
    nodeType *p;
    current = head;
    while (current != NULL)
    {
        p = current;
        current = current -> link;
    }
    // current nẳm ở node cuối cùng

    // tạo node mới
    // cout << p->info << endl

    newnode = new nodeType;
    newnode -> info = 99;
    newnode -> link = NULL;

    // tạo kết nối
    p -> link = newnode;
    last = newnode;

    // hiển thị giá trị trong node
    cout << "  " << endl;
    current = head;
    while (current != NULL)
    {
        cout << current -> info << " ";
        current = current -> link;
    }
    
    // cách 2

    // tạo node mới

    newnode = new nodeType;
    newnode -> info = 99;
    newnode -> link = NULL;

    // tạo kết nối
    last -> link = newnode;
    last = newnode;

    // hiển thị giá trị trong node
    cout << endl;
    cout << " " << endl;
    current = head;
    while (current != NULL)
    {
        cout << current -> info << " ";
        current = current -> link;
    }
    

    //--- chèn vị trí ở chính giữa

    // step tính chiều dài node
    int numnode = 0;
    current = head;
    while (current != NULL)
    {
        numnode = numnode + 1;
        current = current -> link;
    }

    // step tính vị trí trung tâm
    int mid = numnode/2;
    current = head;
    i = 0;
    while (i < mid-1)
    {
        current = current -> link;
        i = i + 1;
    }

    // tạo node mới
    newnode = new nodeType;
    newnode -> info = 100;
    newnode -> link = NULL;


    // tạo liên kết tại current
    newnode -> link = current->link;
    current -> link = newnode;

    // hiển thị kết quả
    cout << endl;
    cout << " " << endl;
    current = head;
    while (current != NULL)
    {
        cout << current -> info << " ";
        current = current -> link;
    }
    
    // chèn số 69 sau số 8

    // step đi tìm vị trí số 8
    current = head;
    while ((current -> info) != 8)
    {
        cout << current -> info << " ";
        current = current -> link;
    }

    // tạo node mới
    newnode = new nodeType;
    newnode -> info = 69;
    newnode -> link = NULL;

    // tạo liên kết tại current
    newnode -> link = current -> link;
    current -> link = newnode;

    // hiển thị kết quả
    cout << endl;
    cout << " " << endl;
    current = head;
    while (current != NULL)
    {
        cout << current -> info << " ";
        current = current -> link;
    }

    cout << endl << endl;
    cout << "Chuong trinh ket thuc " << endl;
    return 0;
}