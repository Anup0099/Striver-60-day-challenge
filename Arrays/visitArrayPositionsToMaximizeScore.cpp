#include <bits/stdc++.h>
using namespace std;
long long find(int i, vector<int> &nums, long long x, int f, vector<vector<int>> &dp)
{
    if (i < 0)
        return 0;
    if (dp[i][f] != -1)
        return dp[i][f];
    long long val = nums[i];
    if ((nums[i] % 2 == 0 and f) || (nums[i] % 2 == 0 and f == 0))
    {
        val += find(i - 1, nums, x, f, dp);
    }
    else
    {
        // i have two choices
        // 1st is  i dont consider ith value
        long long cur = find(i - 1, nums, x, f, dp);
        val = max(cur, val + find(i - 1, nums, x, 1 - f, dp) - x);
    }
    return dp[i][f] = val;
}
long long maxScore(vector<int> &nums, int x)
{
    int n = nums.size();
    vector<vector<long long>> dp(n, vector<long long>(2, -1));
    reverse(begin(nums), end(nums));
    int f = 0;
    if (nums[n - 1] % 2)
        f = 1;
    find(n - 1, nums, x, f, dp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}