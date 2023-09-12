#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int solve(int ind, int n, bool buy, vector<int> &prices, vector<vector<int>> dp)
    {
        if (ind == n)
            return 0;
        long ans = 0;
        if (dp[ind][buy] != -1)
            return dp[ind][buy];
        if (buy)
        {

            ans = max(-prices[ind] + solve(ind + 1, n, 0, prices, dp), 0 + solve(ind + 1, n, 1, prices, dp));
        }
        else
        {
            ans = max(prices[ind] + solve(ind + 1, n, 1, prices, dp), 0 + solve(ind + 1, n, 0, prices, dp));
        }
        return dp[ind][buy] = ans;
    }
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        bool buy = true;
        vector<vector<int>> dp(n + 1, vector<int>(2, 0));

        dp[n][0] = dp[n][1] = 0;
        long profit = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (buy)
            {
                profit = max(-prices[i] + dp[i + 1][0], 0 + dp[i + 1][1]);
            }
            else
            {
                profit = max(prices[i] + dp[i + 1][1], 0 + dp[i + 1][0]);
            }
        }
        return dp[0][0];
    }
};
int main() {}