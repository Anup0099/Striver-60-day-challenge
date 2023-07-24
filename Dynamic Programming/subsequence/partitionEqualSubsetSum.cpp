#include <bits/stdc++.h>
using namespace std;
bool subsetSumUtil(int ind, vector<int> &nums, vector<vector<int>> &dp, int k)
{
    if (k == 0)
        return true;
    if (ind == 0)
    {
        return nums[0] == k;
    }
    if (dp[ind][k] != -1)
    {
        return dp[ind][k];
    }
    bool notTaken = subsetSumUtil(ind - 1, nums, dp, k);
    bool taken = false;
    if (nums[ind] <= k)
    {
        taken = subsetSumUtil(ind - 1, nums, dp, k - nums[ind]);
    }
    return dp[ind][k] = notTaken || taken;
}
bool partitionSubsetSum(vector<int> &nums, int k)
{
    int n = nums.size();
    int totSum = 0;
    for (auto it : nums)
    {
        totSum += it;
    }
    if (totSum % 2 == 0)
        return false;
    else
    {
        int k = totSum / 2;
        vector<vector<bool>> dp(n + 1, vector<int>(k + 1, 0));
        // return subsetSumUtil(k - 1, nums, dp, k);
        // tabualtion approach
        for (int i = 0; i < n; i++)
        {
            dp[i][0] = true;
        }
        if (nums[0] <= k)
            dp[0][nums[0]] = true;
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                bool notaken = dp[i - 1][j];
                bool taken = false;
                if (nums[i] <= k)
                {
                    taken = dp[i - 1][j - nums[i]];
                }
            }
        }
        return dp[n - 1][k];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}