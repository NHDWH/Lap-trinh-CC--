#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main ()
{
    // task 1: read file candName.txt --> array candidatesName.
    string candidatesName[6];
    ifstream indata;
    indata.open("candData.txt");
    if (indata.is_open())
    {
        cout <<"File co ton tai " << endl;
        // xử lý dữ liệu đọc vào
        string line;
        int i = 0;
        while (getline(indata, line))
        {
            candidatesName[i] = line;
            i++;
        }
        for (i = 0; i < 6; i++)
        {
            cout << candidatesName[i] << endl;
        }
        indata.close();   
    }
    else
    {
        cout << "File khong ton tai" << endl;
    }
    
    // task 2: sắp xếp thứ tự a-z
    // theo nguyên tắc so sánh 2 cái liền kề, nhỏ hơn thì giữ, lớn hơn thì đổi chỗ
    // candidatesName[i]
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (candidatesName[i] < candidatesName[j])
            {
                string temp;
                temp = candidatesName[i];
                candidatesName[i] = candidatesName[j];
                candidatesName[j] = temp;
            }    
        }   
    }
    cout << "******************************" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << candidatesName[i] << endl;
    }

    // task 3: thiết lập giá trị ban đầu cho votesByRegion and totalVotes
    int votesByRegion [6][4];
    int totalVotes[6];

    int i;
    int j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            votesByRegion[i][j]=0;
        }
    }

    for (i = 0; i < 6; i++)
    {
        totalVotes[i]=0;
    }
    cout << "******************************" << endl;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << votesByRegion[i][j] << " ";
        }
        cout << endl;
    }
    for (i = 0; i < 6; i++)
    {
        cout << totalVotes[i] << endl;
    }
    
    //task 4:
    // đọc file votesData.txt từ cái biến indata
    indata.open("voteData.txt"); // đọc file mới
    string tenungvien; // trường đầu tiên của hàng
    int vungso; // trường số 2 của hàng
    int phieuvung; // trường số 3 của hàng
    if (indata.is_open())
    {
        cout << "File co ton tai" << endl;
        indata >> tenungvien >> vungso >> phieuvung; // lấy dữ liệu từ hàng đầu tiên
        while (indata) // lấp dần đến khi hết hàng indata=0
        {
            for (i = 0; i < 6; i++) // check tên ứng viên thuộc hàng nào
            {
                if (candidatesName[i] == tenungvien) // nếu tìm được
                {
                    votesByRegion[i][vungso - 1] += phieuvung; // cộng số hàng tương ứng với cột vùng số
                    totalVotes[i] += phieuvung; // tổng + phiếu vùng
                }               
            } 
            indata >> tenungvien >> vungso >> phieuvung; // cập nhật hàng mới
        }
        cout << "******************************" << endl;
        for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    cout << votesByRegion[i][j] << " ";
                }
                cout << endl;
            }
        cout << "******************************" << endl;
        for (i = 0; i < 6; i++)
            {
                cout << totalVotes[i] << endl;
            }
        indata.close();
    }
    else
    {
        cout << "file khong ton tai" << endl;
    }
    
    //task final: tìm người chiến thắng
    // quan tâm đến totalVotes
    int max = 0;
    int win = 0;

    for (i = 0; i < 6; i++)
    {
        if (max < totalVotes[i])
        {
            max = totalVotes[i];
            win = i;
        }
    }
    cout << "******************************" << endl;
    cout << "Nguoi chien thang la: " << candidatesName[win] << endl;
    
    return 0;
}