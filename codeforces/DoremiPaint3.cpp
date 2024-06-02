#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(arr[i]);
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        bool flag=true;
        if(s.size()==1)
        {
            cout<<"YES"<<"\n";
            continue;
        }
        if(s.size()>2)
        {
            flag=false;
        }
        else{
            vector<int>temp;
                for(auto it:mp)
                {
                    temp.push_back(it.second);
                }
            if(n%2==0)
            {
                    if(temp[0]==temp[1])
                    {
                        flag=true;
                    }
                    else{
                        flag=false;
                    }
            }
            else{
                if(abs(temp[0]-temp[1])==1)
                {
                    flag=true;
                }
                else{
                    flag=false;
                }
            }
        }
        if(flag)
        {
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
} 
