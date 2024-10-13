#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 50;

char ten[][MAX] = { "Linh", "Yen", "Hong", "Dao", "Mai", "Truc", "Mong", "Hung" };
int n = sizeof(ten) / sizeof(ten[0]);

// Bubble sort implementation
void BubbleSort(char arr[][MAX], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (strcmp(arr[j], arr[j]) > 0) 
            {
                char temp[MAX];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

// Selection sort implementation
void SelectionSort(char arr[][MAX], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        int min = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (strcmp(arr[j], arr[min]) < 0) 
            {
                min = j;
            }
        }
        if (min != i) 
        {
            char temp[MAX];
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[min]);
            strcpy(arr[min], temp);
        }
    }
}

// Insertion sort implementation
void InsertionSort(char arr[][MAX], int n) 
{
    for (int i = 1; i < n; i++) 
    {
        char key[MAX];
        strcpy(key, arr[i]);
        int j = i - 1;
        while (j >= 0 && strcmp(arr[j], key) > 0) 
        {
            strcpy(arr[j + 1], arr[j]);
            j--;
        }
        strcpy(arr[j + 1], key);
    }
}

// Print names function
void printNames(char arr[][MAX], int n, const char* note) 
{
    cout << "Danh sach ten sau khi sap xep (" << note << "):" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i];
        if (i < n - 1) 
        {
            cout << ", ";
        }
    }
    cout << endl << endl;
}

// Search name function
bool searchName(char name[MAX], char arr[][MAX], int n, int& position) 
{
    for (int i = 0; i < n; i++) 
    {
        if (strcmp(arr[i], name) == 0) 
        {
            position = i + 1; // vị trí bắt đầu từ 1
            return true;
        }
    }
    return false;
}

int main() 
{
    // Sắp xếp mảng ten bằng các phương pháp khác nhau
    char ten_bubble[][MAX] = { "Linh", "Yen", "Hong", "Dao", "Mai", "Truc", "Mong", "Hung" };
    BubbleSort(ten_bubble, n);
    printNames(ten_bubble, n, "Bubble sort");

    char ten_selection[][MAX] = { "Linh", "Yen", "Hong", "Dao", "Mai", "Truc", "Mong", "Hung" };
    SelectionSort(ten_selection, n);
    printNames(ten_selection, n, "Selection sort");

    char ten_insertion[][MAX] = { "Linh", "Yen", "Hong", "Dao", "Mai", "Truc", "Mong", "Hung" };
    InsertionSort(ten_insertion, n);
    printNames(ten_insertion, n, "Insertion sort");

    //Câu 2: Nhập tên cần tìm kiếm
    char name[MAX];
    cout << "Nhap ten can tim: ";
    cin.getline(name, MAX);

    int position;
    if (searchName(name, ten_insertion, n, position)) 
    {
        cout << "Ten " << name << " xuat hien tai vi tri: " << position << endl;
    } else 
    {
        cout << "Ten " << name << " khong tim thay trong danh sach sau khi sap xep." << endl;
    }

    return 0;
}