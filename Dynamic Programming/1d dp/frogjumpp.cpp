#include <bits/stdc++.h>
using namespace std;
const int INF =LLONG_MAX>>1;
int n;
int a[100013];
int dp[100013];
int solve(int i)
{
    if (i == n - 1)
        return 0;
    if (i >= n)
    {
        return INF;
    }
    if (dp[i] != -1)
        return dp[i];
    return dp[i]=min(abs(a[i+1]-a[i])+solve(i+1),abs(a[i+2]-a[i+1])+solve(i+2));
}
int main()
{

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << solve(0);
}