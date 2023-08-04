#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &arr, int n, int ind, int prev_ind, vector<vector<int>> dp)
{
    if (ind == n)
    {
        return 0;
    }
    if (dp[ind][prev_ind + 1] != -1)
        return dp[ind][prev_ind + 1];
    int nottake = 0 + solve(arr, n, ind + 1, prev_ind, dp);
    int take = 0;
    if (arr[prev_ind] <= arr[ind])
    {
        take = 1 + solve(arr, n, ind + 1, prev_ind, dp);
    }
    return dp[ind][prev_ind + 1] = max(take, nottake);
}
int longestIncreasingSubsequence(vector<int> arr)
{
    int n = arr.size();

    vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    return solve(arr, n, 0, -1, dp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}