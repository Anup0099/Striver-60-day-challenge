#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int hh= stoi(s.substr(0,2));
        string period= "AM";
        if(hh>=12)
        {
            period="PM";
            if(hh>12)
            {
                hh-=12;
            }
        }
        else if(hh==0)
        {
            hh=12;
        }
        printf("%02d:%s%s\n",hh,s.substr(3,2).c_str(),period.c_str());
    }
} 