#include <bits/stdc++.h>
using namespace std;
bool isMatch(string s, string p)
{
    int n = s.length();
    int m = p.length();
    vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
    dp[0][0] = true;
    bool flag = false;
    for (int j = 1; j <= m; j++)
    {
        dp[0][j] = false;
    }
    for (int i = 1; i <= n; i++)
    {
        bool flag = true;
        for (int j = 1; j < i; j++)
        {
            if (s[j - 1] != '*')
            {
                flag = false;
                break;
            }
        }
        dp[i][0] = flag;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (p[j - 1] == '?' or p[j - 1] == s[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else if (p[j - 1] == '*')
            {
                dp[i][j] = dp[i - 1][j] or dp[i][j - 1];
            }
            else
            {
                dp[i][j] = false;
            }
        }
    }
    return dp[n][m];
}
bool solve(string s, string p, int i, int j, vector<vector<bool>> &dp)
{
    int n = int(s.length());

    int m = int(p.length());
    if (i < 0 and j < 0)
    {
        return true;
    }
    if (i > 0 and j < 0)
    {
        return false;
    }
    if (i < 0 and j > 0)
    {
        for (int k = 0; k < j; k++)
        {
            if (p[k] != '*')
            {
                return false;
            }
        }
        return true;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    if (s[i] == p[i] or s[i] == '?')
    {
        return solve(s, p, i - 1, j - 1, dp);
    }
    if (s[i] == '*')
    {
        return solve(s, p, i - 1, j, dp) or solve(s, p, i, j - 1, dp);
    }
    return false;
}
bool ismatch(string s, string p)
{
    int n = s.length();
    int m = p.length();
    vector<vector<bool>> dp(n, vector<bool>(m , -1));
    int i = 0, j = 0;
    return solve(s, p, i, j, dp);
}
int main() {}