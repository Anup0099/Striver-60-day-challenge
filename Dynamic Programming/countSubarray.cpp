#include <bits/stdc++.h> 
using namespace std; 
int count(vector<int>&arr,int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==0)
            {
                ans++;
            }
        }
    }
    return ans;
}
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

        
    }
} 