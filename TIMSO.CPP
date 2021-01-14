#include <bits/stdc++.h>
using namespace std;
ifstream input("bai1.INP");
int main()
{

    string chuoi;

    input >> chuoi;

    string day;

    for(int i=0; i<=chuoi.length()-1;i++)
    {
        if((int)chuoi[i]-48 >=0 && (int)chuoi[i]-48 <=9)
        {
            day = day+chuoi[i];
        }
    }

    int chay = 0;
    int run = 4;
    string out;
    while(out.length() != 5)
    {
        string num = "0";

        for(int i=chay;i<=day.length()-1-run;i++)
        {
            if(stoi(num) < (int)day[i]-48)
            {
                num = day[i];
            }

            if((int)day[i]-48 == 9)
            {
                out = out+num;
                chay+=1;
                run--;
                break;
            }

            if(i == day.length()-1-run)
            {
                out = out+num;
                chay+=1;
                run--;
                break;
            }
            chay++;
        }
    }

    cout << out;



}
