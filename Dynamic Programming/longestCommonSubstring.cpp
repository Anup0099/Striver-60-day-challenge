#include <bits/stdc++.h>
using namespace std;
int f(string s1, string s2, int i, int j, vector<vector<int>> dp)
{
    // base case
    // last se traverse kr rhe hai to 0 pahuch jayega to return 0 karna padega
    if (i < 0 || j < 0)
        return 0;
    // memoization
    if (dp[i][j] != -1)
        return dp[i][j];
    // ab hoga choice diagram;
    if (s[i] == s[j])
    {
        return dp[i][j] = 1 + f(s1, s2, i - 1, j - 1, dp);
    }
    else
    {
        return dp[i][j] = max(f(s1, s2, i - 1, j, dp), f(s1, s2, i - 1, j - 1, dp));
    }
    return dp[i][j];
}
int lcs(string s1, string s2)
{
    int n = s1.length();
    int m = s2.length();
    vector<vector<int>> dp(n, vector<int>(m, 0));
    return f(s1, s2, n - 1, m - 1, dp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}