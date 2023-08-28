#include <bits/stdc++.h>
using namespace std;
int dp[2501][2501];
int n;
int lis(vector<vector<int>> &nums, int prev_ind, int ind)
{
    if (ind == nums.size())
    {
        return 0;
    }
    if (prev_ind != -1 and dp[prev_ind][ind] != -1)
    {
        return dp[prev_ind][ind];
    }
    int taken = 0;
    if (prev_ind == -1 || nums[ind] < nums[prev_ind])
    {
        taken = 1 + lis(nums, ind, ind + 1);
    }
    int nottaken = lis(nums, prev_ind, ind + 1);
    if (prev_ind != -1)
    {
        return dp[prev_ind][ind] = max(taken, nottaken);
    }
    return max(taken, nottaken);
}
int findLongestChain(vector<vector<int>> &pairs)
{
    memset(dp, -1, sizeof(dp));
    sort(pairs.begin(), pairs.end());
    return lis(pairs, -1, 0);
}
int main()
{

    int n;
    cin >> n;
    vector<vector<int>> pairs(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        cin >> pairs[i][0] >> pairs[i][1];
    }
    cout << findLongestChain(pairs);
}