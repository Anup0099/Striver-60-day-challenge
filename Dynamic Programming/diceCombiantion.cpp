#include <bits/stdc++.h>
using namespace std;
int solve(int ind, int n, vector<int> &dp)
{
    if (ind == n)
    {
        return 1;
    }
    if (ind > n)
    {
        return 0;
    }
    if (dp[ind] != -1)
    {
        return dp[ind];
    }
    int ans = 0;
    for (int i = 1; i <= 6; i++)
    {
        ans += solve(ind + i, n, dp);
    }
    return dp[ind] = ans;
}
int count(int ind, int n)
{
    if (ind == 0)
    {
        return 1;
    }
    int ans = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (ind - i >= 0)
        {
            ans += count(ind - i, n);
        }
    }
    return ans;
}
int dice(int n)
{
    return count(n, n);
}
int diceCombination(int n)
{
    // tabulation method
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i - j >= 0)
            {
                dp[i] = (dp[i] + dp[i - j]) % 1000000007;
            }
        }
    }
    // for (auto it : dp)
    // {
    //     cout << it << " ";
    // }

    return dp[n];
}
long long noOfWays(int M, int N, int X)
{
    // code here
    vector<vector<long long>> dp(N + 1, vector<long long>(X + 1, 0));
    for (int i = 1; i <= M && i <= X; i++)
    {
        dp[1][i] = 1;
    }
    for (int i = 2; i <= N; i++)
    {
        for (int j = 1; j <= X; j++)
        {
            for (int k = 1; k <= M && k < j; k++)
            {
                dp[i][j] += dp[i - 1][j - k];
            }
        }
    }
    return dp[N][X];
}
int main()
{
    int n;
    cin >> n;

    cout << dice(n) << endl;
}