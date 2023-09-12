#include <bits/stdc++.h>
using namespace std;
int solve(int ind, vector<int> &coins, int target, vector<vector<int>> dp)
{
    if (ind == 0)
    {
        if (target % coins[0] == 0)
        {
            return target / coins[0];
        }
        else
        {
            return 1e9;
        }
    }
    if (dp[ind][target] != -1)
    {
        return dp[ind][target];
    }

    int notake = solve(ind - 1, coins, target, dp);
    int take = 1e9;
    if (coins[ind] <= target)
    {
        take = 1 + solve(ind, coins, target - coins[ind], dp);
    }
    return dp[ind][target] = min(take, notake);
}
int countCoins(vector<int> &coins, int target)
{
    int n = coins.size();
    vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));
    for(int i=0;i<target;i++)
    {
        if(i%coins[0]==0)
        {
            dp[0][i]=i/coins[0];
        }
        else
        {
            dp[0][i]=1e9;
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < target; j++)
        {
           
                int notake = dp[i - 1][j];
                int take = 1e9;
                if (coins[i] <= j)
                {
                    take = 1 + dp[i][j - coins[i]];
                }
                dp[i][j] = min(take, notake);
            
        }

    }
    return dp[n - 1][target];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, target;
    cin >> n >> target;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    cout << countCoins(coins, target);
}