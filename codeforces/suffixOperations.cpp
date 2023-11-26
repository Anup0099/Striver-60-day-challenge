#include <bits/stdc++.h> 
using namespace std;

int main() {
    int  t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v(n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans += abs(v[i]-v[i+1]);//there we are finding the absolute difference between the adjacent elements of the array and adding it to the answer 
        }
        // now we have to find the minimum difference betweeen the adjacent elements of the array
        
    }
} 