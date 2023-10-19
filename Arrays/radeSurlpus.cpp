#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, b1, b2;

        cin >> a1 >> a2 >> b1 >> b2;
        bool flag=true;
        int diff1= a1-a2;   
        int diff2= b1-b2;
        int ans=diff1+diff2;
        if(ans<0)
        {
            flag=false;
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
}