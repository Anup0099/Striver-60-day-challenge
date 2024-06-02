#include <bits/stdc++.h>
using namespace std;
int longestCommonSubsequence(string s, string t)
{
    int n = s.size();
    int m = t.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        dp[0][j] = 0;
    }
    for (j = 0; j < m - 1; j++)
    {
        dp[i][0] = 0;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s[i - 1] == t[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                // ans = max(ans, dp[i][j]);
            }
            else
            {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
            ans = max(ans, dp[i][j]);
        }
    }
    return ans;
}
int longestCommonSubstring(string s, string t, int i, int j)
{
    int n = s.size();
    int m = t.size();
    int ans = 0;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i < n - 1; i++)
    {
        dp[i][0] = 0;
    }
    for (int j = 0; j < m - 1; j++)
    {
        dp[0][j] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s[i - 1] == t[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = 0;
            }
            ans = max(ans, dp[i][j]);
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s = "ABCdef";
    string t = "ABCedf";
    cout << longestCommonSubstring(s, t, s.size(), t.size()) << endl;
}