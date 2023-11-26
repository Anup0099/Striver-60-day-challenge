#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr, int ind, int &ans, int sum)
{
    if (ind >= arr.size())
    {
        ans = max(ans, sum);
        return;
    }
    else
    {
        solve(arr, ind + 2, ans, sum + arr[ind]);
        solve(arr, ind + 1, ans, sum);
    }
}
int maximumSumOFnonadjacentelement(vector<int> arr)
{
    int n = arr.size();

    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = arr[0];
    for (int i = 2; i <= n; i++)
    { 
        int take = arr[i - 1] + dp[i - 2];
        int nottake = dp[i - 1];
        dp[i] = max(take, nottake);
    }
    return dp[n];
}
int main()
{
    vector<int> arr = {5, 5, 10, 100, 10, 5};
    cout << maximumSumOFnonadjacentelement(arr);
}