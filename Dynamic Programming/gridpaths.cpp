#include <bits/stdc++.h>
using namespace std;
int n;
const int mod=1e9+7;
char arr[1013][1013];
int dp[1013][1013];
int solve(int i, int j)
{
    if (i >= n || j >= n || arr[i][j] == '*')
        return 0;
    if (i == n - 1 and j == n - 1)
        return 1;

    if (dp[i][j] != -1)
        return dp[i][j];
    return dp[i][j] = (solve(i + 1, j) + solve(i, j + 1))%mod;
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = s[j];
        }
    }
    memset(dp, -1, sizeof(dp));
    if (arr[n - 1][n - 1] == '*')
    {
        cout << 0;
        return 0;
    }
    cout << solve(0, 0);
}