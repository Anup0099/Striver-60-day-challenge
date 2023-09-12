#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &prices, int i, int n, bool buy,vector<vector<int>>&dp)
{
    if (i >= n)
        return 0;
    int ans = 0;

    if (buy)
    {
        int take = solve(prices, i + 1, n, false,dp) - prices[i];
        int notake = solve(prices, i + 1, n, true,dp);
        ans = max(take, notake);
    }
    else
    {
        int sell = solve(prices, i + 2, n, true,dp) + prices[i];
        int notsell = solve(prices, i + 1, n, false,dp);
        ans = max(sell, notsell);
    }
    return ans;
}
int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    bool buy = true;
    vector<vector<int>>dp(n,vector<int>(2,-1));
    return solve(prices, 0, n - 1, buy,dp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}