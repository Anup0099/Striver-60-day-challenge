#include <bits/stdc++.h>
using namespace std;
int solve(int ind, vector<int> &nums, int amount)
{
    if (ind == 0)
    {
        if ((amount % nums[0]) == 0)
        {
            return amount / nums[0];
        }
        else
        {
            return 1e9;
        }
    }
    int notTake = solve(ind - 1, nums, amount);
    int take = INT_MIN;
    if (nums[ind] <= amount)
    {

        take = 1 + solve(ind, nums, amount - nums[ind]);
    }
    int ans = min(take, notTake);
    return ans;
}
int coinChnage(vector<int> &nums, int amount)
{
    int n = nums.size();
    vector<vector<int>> dp(n, vector<int>(amount + 1, 0));
    for (int i = 0; i <= amount; i++)
    {
        if (i % nums[0] == 0)
        {
            dp[0][i] = i / nums[0];
        }
        else
        {
            dp[0][i] = 1e9;
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= amount; j++)
        {
            int notTake = 0 + dp[i - 1][j];
            int take = 0;
            if (nums[i] <= amount)
            {
                take = 1 + dp[i][j - nums[i]];
            }
            dp[i][j] = min(take, notTake);
        }
    }
    int ans = dp[n][amount];
    if (ans >= 1e9)
        return -1;
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int amount;
    cin >> amount;
    cout << coinChnage(v, amount);
}