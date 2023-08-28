#include <bits/stdc++.h>
using namespace std;
vector<int>memo;
int search(vector<vector<int>>&offers,int end,int idx)
{
    int n=offers.size();
    int l=idx,r=n-1;
    int i=-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(offers[mid][0]<=end)
        {
            i=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return i;

}
int getProfit(vector<vector<int>>&offers,int n ,int idx)
{
    if(idx==n)return 0;
    if(memo[idx]!=-1)return memo[idx];
    // include the current offer
    int maxGold=getProfit(offers,n,idx+1);
    // sell
    int next_possible =search(offers,offers[idx][1],idx+1);
    if(next_possible!=-1)
    {
        maxGold=max(maxGold,getProfit(offers,n,next_possible+1)+offers[idx][2]);
    }
    memo[idx]=maxGold;
    return maxGold;
}
int maximizeTheProfit(int n,vector<vector<int>>offers)
{
    sort(offers.begin(),offers.end());
    int m= offers.size();
    memo.resize(m,-1);
    return getProfit(offers,m,0);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}