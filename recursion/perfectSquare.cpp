#include <bits/stdc++.h>
using namespace std;
int solve(int n, vector<int>& dp)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return INT_MAX;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }
    int minimum = INT_MAX;
    for (int i = 1; i <= sqrt(n); i++)
    {
        int res = 1 + solve(n - i * i, dp);
        minimum = min(minimum, res);
    }
    return dp[n] = minimum;
}
int perfectSquare(int n)
{
    vector<int> dp(n + 1, 0);
    return solve(n, dp);
}
int main()
{
    cout << perfectSquare(12) << endl;
    cout << perfectSquare(13) << endl;
    return 0;
}