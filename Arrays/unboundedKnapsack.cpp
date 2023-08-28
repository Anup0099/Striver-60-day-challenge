#include <bits/stdc++.h>
using namespace std;

int helper(int N, int W, int val[], int wt[], vector<vector<int>> &dp)
{
    if (N == 0)
        return 0;
    if (dp[N][W] != -1)
        return dp[N][W];
    if (wt[N - 1] <= W)
        return dp[N][W] = max(val[N - 1] + helper(N, W - wt[N - 1], val, wt, dp), helper(N - 1, W, val, wt, dp));
    return dp[N][W] = helper(N - 1, W, val, wt, dp);
}
int knapSack(int N, int W, int val[], int wt[])
{
    // code here
    vector<vector<int>> dp(N + 1, vector<int>(W + 1, -1));
    return helper(N, W, val, wt, dp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N = 2;
    int W = 3;
    int val[] = {1, 1};
    int wt[] = {2, 1};
    cout << knapSack(N, W, val, wt);
}
