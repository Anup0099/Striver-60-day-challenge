#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int k;cin>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        bool present=false;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==k)
            {
                present=true;
                break;
            }
        }
        if(present)
        {
            cout<<"YEs"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
} 