#include <bits/stdc++.h>
using namespace std;
int solve(int n, int i, int dp[])
{
    if (i > n)
        return 0;
    if (i == n)
        return 1;
    if (dp[i] != -1)
        return dp[i];
    int one = solve(n, i + 1, dp);
    int two = solve(n, i + 2, dp);
    return dp[i] = one + two;
}
int climbStairs(int n)
{
    int dp[n + 1];
    memset(dp, -1, sizeof(dp));
    return solve(n, 0, dp);
}
int fibonacci(int n){
    vector<int>dp(n+1,0);
    if(dp[n]!=0)return dp[n]
    if(n==0 || n==1)return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    cin >> n;
    cout << climbStairs(n);
    return 0;
}