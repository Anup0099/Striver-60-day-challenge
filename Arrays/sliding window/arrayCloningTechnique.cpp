#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;cin>>t;
    while(t--)
    {
        int n,x;cin>>n;
        int maxa=INT_MIN;
        map<int,int>map;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            map[x]++;
            maxa=max(maxa,x);
        }
        if(maxa==n)
        {
            cout<<0<<endl;
        }else{
            int count=1;
            while(maxa<=n)
            {
                if(maxa+maxa>=n)
                {
                    count+=(n-maxa);
                    break;
                }
                count+=maxa;
                maxa*=2;
                count++;
            }
            cout<<count<<endl;

        }
    }
} 