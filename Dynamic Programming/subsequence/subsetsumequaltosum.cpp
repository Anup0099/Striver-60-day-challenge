#include <bits/stdc++.h>
using namespace std;
bool f(int i,int sum,vector<int>&arr,int target){
    if(sum==target)return true;
    if(i==arr.size())return false;
    bool nottake=f(i+1,sum,arr,target);
    bool take = false;
    if(sum+arr[i]<=target){
        take=f(i+1,sum+arr[i],arr,target);
    }
    return take||nottake;
}
bool subsetSum(vector<int>&arr,int target){
    int n= arr.size();
    vector<vector<bool>>dp(n+1,vector<bool>(target+1,false));
    for(int i=0;i<=n;i++){
        dp[i][0]=true;
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int>arr={1,2,3,4,5};
    int target=10;
    cout<<subsetSum(arr,target);
}