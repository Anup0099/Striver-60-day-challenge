#include <bits/stdc++.h>
using namespace std;

vector<vector<vector<long long>>> dp;

long long solve(int n, int k, int x, vector<int> &arr, int sum = 0, int taken = 0, int ind = 0)
{
    if (taken == k)
    {
        if (sum == x)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if (ind == n)
    {
        return 0;
    }
    if (dp[ind][sum][taken] != -1)
    {
        return dp[ind][sum][taken];
    }
    long long take = solve(n, k, x, arr, sum + arr[ind], taken + 1, ind + 1);
    long long notTake = solve(n, k, x, arr, sum, taken, ind + 1);

    return dp[ind][sum][taken] = max(take, notTake);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        dp = vector<vector<vector<long long>>>(n, vector<vector<long long>>(x + 1, vector<long long>(k + 1, -1)));
        int result = solve(n, k, x, arr);
        if (result == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}