#include <bits/stdc++.h>
using namespace std;
// You are given a binary array nums.

// A subarray of an array is good if it contains exactly one element with the value 1.

// Return an integer denoting the number of ways to split the array nums into good subarrays. As the number may be too large, return it modulo 109 + 7.

// A subarray is a contiguous non-empty sequence of elements within an array.

int numberOfGoodSubarraySplits(vector<int> &nums)
{
    int n= nums.size();
    int count=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            count++;
        }
        else{
            ans+=count;
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