#include <bits/stdc++.h>
using namespace std;
int solve(int ind, int prev, vector<int> &nums, vector<vector<int>> dp)
{
    if (ind >= nums.size())
    {
        return 0;
    }
    if (dp[ind][prev] != -1)
    {
        return dp[ind][prev];
    }
    int take = INT_MIN;

    if (prev == -1 || nums[prev] < nums[ind])
    {
        take = 1 + solve(ind + 1, ind, nums, dp);
    }
    int nottake = solve(ind + 1, prev, nums, dp);
    return dp[ind][prev] = max(take, nottake);
}
int longestIncreasingSubsequence(vector<int> &nums)
{
    int ind = 0;
    int prev = -1;
    vector<vector<int>> dp(nums.size(), vector<int>(nums.size(), -1));
    return solve(ind, prev, nums, dp);
}
int lengthOfLIS(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n, 0);
    
   

}
int main()
{
    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
    cout << longestIncreasingSubsequence(nums);
    return 0;
}