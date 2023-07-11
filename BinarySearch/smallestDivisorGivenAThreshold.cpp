#include <bits/stdc++.h>
using namespace std;
int smallestAfterMinDivisor(vector<int>&nums,int divisor){
    int ans=0;
    for(int i=0;i<nums.size();i++){
        ans+=ceil(nums[i]/(double)divisor);
    }
    return ans;
}
int smallestMinDivisor(vector<int>&nums,int threshold){
    int n= nums.size();
    int low=0,high=*max_element(nums.begin(),nums.end());
    int ans= high;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(smallestAfterMinDivisor(nums,mid)<=threshold){
            ans= mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}