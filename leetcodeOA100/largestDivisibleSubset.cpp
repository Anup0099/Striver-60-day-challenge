#include <bits/stdc++.h>
using namespace std;
vector<int> f(vector<int>&nums,int ind,int prev,vector<int>&ans)
{
    if(ind==nums.size())return ans;
    if(prev==-1)
    {
        ans[ind]=nums[ind];
        return f(nums,ind+1,nums[ind],ans);
    }
    if(nums[ind]%prev==0)
    {
        ans[ind]=nums[ind];
        return f(nums,ind+1,nums[ind],ans);
    }
    else
    {
        return f(nums,ind+1,prev,ans);
    }

    
}
vector<int> largestDivisibleSubset(vector<int>& nums) 
{
    int n=nums.size();
    vector<int>ans(n,-1);
    sort(nums.begin(),nums.end());
    
    return f(nums,0,ans,0);
}
        
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}