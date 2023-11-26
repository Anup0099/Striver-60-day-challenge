#include <bits/stdc++.h> 
using namespace std; 
// You are given a 0-indexed integer array nums, and an integer k.

// The K-or of nums is a non-negative integer that satisfies the following:

// The ith bit is set in the K-or if and only if there are at least k elements of nums in which bit i is set.
// Return the K-or of nums.

// Note that a bit i is set in x if (2i AND x) == 2i, where AND is the bitwise AND operator.
int findkor(vector<int>&nums,int k)
{
    int n=nums.size();
    int ans=0;
    // we have to find the k-or of the array
    for(int i=0;i<n;i++)
    {
        ans&=nums[i];
    }
    if(ans==0)
    {
        return 0;

    }
    int count=0;
    

}
int main() {} 