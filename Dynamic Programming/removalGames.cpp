#include <bits/stdc++.h>
using namespace std;
// There is a list of n
//  numbers and two players who move alternately. On each move, a player removes either the first or last number from the list, and their score increases by that number. Both players try to maximize their scores.

// What is the maximum possible score for the first player when both players play optimally?
int solve(int i, int j, vector<int> &arr, vector<vector<int>> dp)
{
    if (i > j)
        return 0;
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    int pickLeft = arr[i] + min(solve(i + 2, j, arr, dp), solve(i + 1, j - 1, arr, dp));
    int pickRight = arr[j] + min(solve(i + 1, j - 1, arr, dp), solve(i, j - 2, arr, dp));
    return dp[i][j] = max(pickLeft, pickRight);
}
int removalGame(int n, vector<int> &arr)
{
    int i = 0, j = n - 1;
    vector<vector<int>> dp(n, vector<int>(n, -1));
    return solve(i, j, arr,dp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<vector<int>> dp(n, vector<int>(n, -1));
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << removalGame(n, arr);
}