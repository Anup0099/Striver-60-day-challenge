#include <bits/stdc++.h>
using namespace std;
int minimumDeleteSum2(string s1, string s2)
{
    int n = s1.length(), m = s2.length();
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = dp[i - 1][0] + s1[i - 1];
    }
    for (int i = 1; i <= m; i++)
    {
        dp[0][i] = dp[0][i - 1] + s2[i - 1];
    }
    // here we are using dp to store the sum of ascii values of the string
    // so we are adding the ascii value of the string to the dp array
    // and then we are finding the minimum of the two
    // if the two characters are same then we are not adding anything
    // else we are adding the ascii value of the character
    // and then we are finding the minimum of the two
    // and then we are returning the dp[n][m]
    // which will be the minimum sum of the ascii values of the two strings
    // which we have to delete to make the two strings equal

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                int op1 = dp[i - 1][j] + s1[i - 1];
                int op2 = dp[i][j - 1] + s2[j - 1];
                dp[i][j] = min(op1, op2);
            }
        }
    }
    return dp[n][m];
}

int solve(string s1, string s2, int n, int m, int sum)
{
    if (n == 0 and m == 0)
    {
        return sum;
    }
    if (n == 0)
    {
        return sum + s2[m - 1];
    }
    if (m == 0)
    {
        return sum + s1[n - 1];
    }
    if (s1[n - 1] == s2[m - 1])
    {
        return solve(s1, s2, n - 1, m - 1, sum);
    }
    else
    {
        int op1 = solve(s1, s2, n - 1, m, sum + s1[n - 1]);
        int op2 = solve(s1, s2, n, m - 1, sum + s2[m - 1]);
        return min(op1, op2);
    }
    return -1;
}

int minimumDeleteSum(string s1, string s2)
{
    int n = s1.length(), m = s2.length();
    int sum = 0;
    return solve(s1, s2, n, m, sum);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;
    cout << minimumDeleteSum(s1, s2) << endl;
}