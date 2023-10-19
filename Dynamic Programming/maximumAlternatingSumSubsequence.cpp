#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
ll f(vector<int>&nums,int idx,int flag)
{
    if(idx>=nums.size())return 0;
    int skip = f(nums,idx+1,flag);
    int take = 0;
    int val=nums[idx];
    if(!flag)
    {
        val = -val;
    }
    take = val + f(nums,idx+1,!flag);
    return max(take,skip);
}
ll maxSumAlternatingSubsequence(vector<int>&nums)
{
    int n= nums.size();

    return f(nums,0,0);
} 
int main() {
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<maxSumAlternatingSubsequence(nums);
    return 0;
} 