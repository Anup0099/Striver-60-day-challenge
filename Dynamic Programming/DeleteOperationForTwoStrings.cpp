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
int lcs(string word1, string word2)
{

    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (word1[i - 1] == word2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[n][m];
}
int minimumDistance(string word1, string word2)
{
    n = word1.length();
    m = word2.length();
    int a= lcs(word1, word2);
    return n+m-2*a;
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