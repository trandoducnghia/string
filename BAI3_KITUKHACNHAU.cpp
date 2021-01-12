#include <bits/stdc++.h>

using namespace std;
ifstream input("bai3.INP");
ofstream output("bai3.OUT");


int main()
{
    string chuoi;
    input >> chuoi;
    char mang[50] = {};
    int dem[50] = {};
    int f = 0;

    for (int i=0;i <= chuoi.length()-1;i++)
    {
        int ok = 0;
        for(int j=0;j <=f;j++)
        {
            if(mang[j] == chuoi[i])
            {
                ok  = j;
                break;
            }
        }

        if(ok >=1)
        {
            dem[ok] = dem[ok]+1;
        }
        else
        {
            f++;
            dem[f] = 1;
            mang[f] = chuoi[i];
        }

    }
    int MIN = 0;
    for(int i = 0; i<=f; i++)
    {
        if(dem[MIN] < dem[i])
        {
            MIN = i;
        }
    }

    cout << "co " << f << " ktu khac nhau" << endl;
    cout << "Ktu xuat hien nhieu nhat " << mang[MIN] << " voi " << dem[MIN] << " lan";

}
