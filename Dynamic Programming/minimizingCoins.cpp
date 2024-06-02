#include <bits/stdc++.h>
using namespace std;
int solve(int i, int sum, vector<int> &arr)
{
    if (sum == 0)
    {
        return 0;
    }
    if (i == arr.size())
    {
        return INT_MAX;
    }
    int take = INT_MAX, notTake = INT_MAX;
    if (arr[i] <= sum)
    {
        int res = solve(i, sum - arr[i], arr);
        if (res != INT_MAX)
        {
            take = 1 + res;
        }
    }
    notTake = solve(i + 1, sum, arr);
    return min(take, notTake);
}

int minimizingCoins(vector<int> &arr, int sum)
{
    int n = arr.size();
    vector<int> dp(sum + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= sum; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int take = INT_MAX, notTake = INT_MAX;
            if (arr[j] <= i)
            {
                int res = dp[i - arr[j]];
                if (res != INT_MAX)
                {
                    take = 1 + res;
                }
            }
            notTake = dp[i];
            dp[i] = min(take, notTake);
        }
    }
    return dp[sum] == INT_MAX ? -1 : dp[sum];
}

int main()
{
    int n, sum;
    cin >> n >> sum;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << minimizingCoins(arr, sum) << endl;
}