#include <bits/stdc++.h>
using namespace std;
int n, m;
int solve(string word1, string word2, int i, int j, vector<vector<int>> dp)
{
    if (i >= n and j >= m)
        return 0;
    if (i >= n)
        return m - j;
    if (j >= m)
        return n - i;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (word1[i] == word2[j])
    {
        return dp[i][j] = solve(word1, word2, i + 1, j + 1, dp);
    }
    else
    {
        int op1 = 1 + solve(word1, word2, i + 1, j, dp);
        int op2 = 1 + solve(word1, word2, i, j + 1, dp);
        return dp[i][j] = min(op1, op2);
    }
}
int minimumDistance(string word1, string word2)
{
    int n = word1.length(), m = word2.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i < n; i++)
    {
        dp[i][0] = i;
    }
    for (int i = 0; i < m; i++)
    {
        dp[0][i] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (word1[i - 1] == word2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                int del1 = 1 + dp[i - 1][j];
                int del2 = 1 + dp[i][j - 1];
                dp[i][j] = min(del1, del2);
            }
        }
    }
    return dp[n][m];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string word1, word2;
    cin >> word1 >> word2;
    cout << minimumDistance(word1, word2) << endl;
}