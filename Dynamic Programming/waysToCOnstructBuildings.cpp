#include <bits/stdc++.h>
using namespace std;
int building = 1;
int space = 0;
int solve(int n, int status)
{
    if (n == 0)
        return 1;
    if (status == building)
    {
        return solve(n - 1, space);
    }
    else
    {
        return solve(n - 1, space) + solve(n - 1, building);
    }
    return -1;
}
int TotalWays(int n)
{
    // int status;
    // return solve(n, status) * solve(n, status);
    int dp[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (i == 0)
            {
                dp[i][j] = 1;
            }

            if (j == building)
            {
                dp[i][j] = dp[i - 1][space];
            }
            else
            {
                dp[i][j] = dp[i - 1][space] + dp[i - 1][building];
            }
        }
    }
    long long x = dp[n - 1][building] + dp[n - 1][space];
    return x * x;
}
int main()
{
    int n;
    cin >> n;
    cout << TotalWays(n);
    return 0;
}