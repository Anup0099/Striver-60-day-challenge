#include <bits/stdc++.h>
using namespace std;
int countStones(vector<int>&stones,int k)
{
    int n= stones.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[stones[i]]++;
    }
    int ans=0;
    for(auto it:mp){
        ans+=floor(it.second/k);
        if(it.second%k!=0){
            ans++;
        }   
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k=3;
    vector<int>stones={1,1,1,1,1};
    cout<<countStones(stones,k);
    
}