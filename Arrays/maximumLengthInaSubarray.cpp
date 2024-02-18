#include <bits/stdc++.h>
using namespace std;
// You are given an array of positive integers nums.

// You need to select a subset of nums which satisfies the following condition:

// You can place the selected elements in a 0-indexed array such that it follows the pattern: [x, x2, x4, ..., xk/2, xk, xk/2, ..., x4, x2, x] (Note that k can be be any non-negative power of 2). For example, [2, 4, 16, 4, 2] and [3, 9, 3] follow the pattern while [2, 4, 8, 4, 2] does not.
// Return the maximum number of elements in a subset that satisfies these conditions.

int maximumLength(vector<int> &nums)
{
    int n= nums.size();
    int dp[n];
    dp[0]=1;
    for(int i=1;i<n;i++)
    {
        dp[i]=1;
        for(int j=0;j<i;j++)
        {
            if(nums[i]%nums[j]==0 || nums[j]%nums[i]==0)
                dp[i]=max(dp[i],dp[j]+1);
        }
    }
    return *max_element(dp,dp+n);
}
int main() {}