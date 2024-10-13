#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string tensv[10];
	int i , j;
	string *ptr , tmp;

    for (int i = 0; i < 10; i++)
    {
        cout << "Sinh vien thu " <<  i + 1 << ":";
        cin >> tensv[i];
    }
        cout << "------------------------------" << endl;
        cout << "Danh sach chua sap xep" << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << i + 1 << ". " << tensv[i] << endl;  
        }

        cout << "------------------------------" << endl;
        cout << "Danh sach da sap xep" << endl;
        for (int i = 0; i < 10 - 1; i++)
        {
            for(int j = i + 1; j < 10; j++)
            {
                if (tensv[i] > tensv[j])
                {
                   tmp = tensv[i]; tensv[i] = tensv[j]; tensv[j] = tmp; 
                }
            }       
        }
        for (int i = 0 ; i < 10 ; i++)
	    {
	        ptr = &tensv[i]; 
	        cout << i + 1 << ": "<< *ptr << endl; 
        }
 
    return 0;
}
