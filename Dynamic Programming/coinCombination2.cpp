#include <bits/stdc++.h>
using namespace std;
// You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

// Return the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the coins, return 0.

// You may assume that you have an infinite number of each kind of coin.

// The answer is guaranteed to fit into a signed 32-bit integer.
int solve(vector<int> &coins, int amount, int ind, vector<vector<int>> &dp)
{
    // base case
    if (ind == 0)
    {
        if (amount % coins[0] == 0)
            return 1;
        else
            return 0;
    }
    if (dp[ind][amount] != -1)
        return dp[ind][amount];

    int notTaken = solve(coins, amount, ind - 1, dp);

    int taken = 0;
    if (coins[ind] <= amount)
    {
        cout << ind << " " << amount << " " << coins[ind] << endl;
        taken = solve(coins, amount - coins[ind], ind, dp);
    }

    return dp[ind][amount] = notTaken + taken;
}
int coinCombination(int amount, vector<int> &coins)
{
    int n = coins.size();
    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, -1));
    return solve(coins, amount, n, dp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int amount = 5;
    vector<int> coins = {1, 2, 5};
    cout << coinCombination(amount, coins);
}