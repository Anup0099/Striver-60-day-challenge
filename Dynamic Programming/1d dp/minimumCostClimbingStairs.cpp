#include <bits/stdc++.h>
using namespace std;
int n;
int solve(int ind, vector<int> &cost, vector<int> &dp)
{
    if (ind == 0 || ind == 1)
    {
        return cost[ind];
    }
    int takeOne = 0, takeTwo = 0;
    if (dp[ind] != -1)
        return dp[ind];
    takeOne = cost[ind] + solve(ind - 1, cost, dp);
    takeTwo = cost[ind] + solve(ind - 2, cost, dp);
    return dp[ind] = min(takeOne, takeTwo);
}
int minimumCOstClimbingStairs(vector<int> &cost)
{
    n = cost.size();
    vector<int> dp(n + 1, -1);
    int sum = 0;
    return min(solve(n - 1, cost, dp), solve(n - 2, cost, dp));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> arr = {10, 15, 20};
    cout << minimumCOstClimbingStairs(arr);
}