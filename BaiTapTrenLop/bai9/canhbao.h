#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class canhbao
{
    private:
        string s;
        
    public:
        canhbao ()
        {
            s = "Ban da chia cho so zero ";
        }
        canhbao (string a):s(a){}
        void what()
        {
            cout << "************ WARMING ************" << endl;
            cout << s << endl;
        }
};