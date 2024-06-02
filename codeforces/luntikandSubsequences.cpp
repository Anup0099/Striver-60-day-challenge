#include <bits/stdc++.h>
using namespace std;
int countSubsequenceWithSum(vector<int> &arr, int k, int i, int sum)
{

    // if (i < 0)
    // {
    //     if (sum == k)
    //     {
    //         return 1;
    //     }
    //     return 0;
    // }

    // int take = 0;
    // if (sum + arr[i] <= k)
    // {
    //     take = countSubsequenceWithSum(arr, k, i - 1, sum + arr[i]);
    // }
    // int nottake = countSubsequenceWithSum(arr, k, i - 1, sum);

    // return take + nottake;
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(k + 1, 0));
    for (int i = 0; i < n; i++)
    {
        dp[i][0] = 1;
    }
    if (arr[0] <= k)
    {
        dp[0][arr[0]] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            int nottake = dp[i - 1][j];
            int take = 0;
            if (arr[i]<=j)
            {
                take = dp[i - 1][j - arr[i]];
            }
            dp[i][j] = take + nottake;
        }
    }
    return dp[n - 1][k];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int total = accumulate(arr.begin(), arr.end(), 0);
        int k = total - 1;
        int sum = 0;
        cout << countSubsequenceWithSum(arr, k, n - 1, 0) << endl;
    }
}