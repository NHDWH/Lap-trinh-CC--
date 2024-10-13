#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    char a[] = "Hoc, hoc nua, hoc mai. Co chi thi len";
    char *ptc;
    ptc = a;

    for(int i = 0; i < strlen(a); i++)
    {
        if (*ptc == 'i')
            *ptc = 'I';
        ptc ++;
    }

    cout << a << endl;

return 0;
}