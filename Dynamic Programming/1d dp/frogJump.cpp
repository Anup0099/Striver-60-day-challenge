#include <bits/stdc++.h>
using namespace std;
int frogJump(vector<int> heights)
{
    // RECURSION METHOD TC O(2^N) SC O(N)
    // if (ind == 0)
    //     return 0;
    // if (dp[ind] != -1)
    //     return dp[ind];
    // int jumpOne = frogJump(heights, dp, ind - 1) + abs(heights[ind] - heights[ind - 1]);
    // int jumpTwo = INT_MAX;
    // if (ind > 1)
    // {
    //     jumpTwo = frogJump(heights, dp, ind - 2) + abs(heights[ind] - heights[ind - 1]);
    // }
    // dp[ind] = min(jumpOne, jumpTwo);
    // return dp[ind];
    // TABUALTION METHOD TC O(N) SC O(N)
    int n = heights.size();
    vector<int> dp(n, -1);
    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        int jumpOne = dp[i - 1] + abs(heights[i] - heights[i - 1]);
        int jumpTwo = INT_MAX;
        if (i > 1)
        {
            jumpTwo = dp[i - 2] + abs(heights[i] - heights[i - 2]);
        }
        dp[i] = min(jumpOne, jumpTwo);
    }
    // for (auto it : dp)
    // {

    //     cout << it << " ";
    // }
    // cout << endl;
    return dp[n - 1];
    // SPACE OPTIMIZED TC O(N) SC O(1)

       // int n = heights.size();
    // int dp[2];
    // dp[0] = 0;
    // int prev = 0, prev2 = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     int jumpOne = prev + abs(heights[ind] - heights[ind - 1]);
    //     int jumpTwo = INT_MAX;
    //     if (i > 1)
    //     {
    //         jumpTwo = prev2 + abs(heights[ind] - heights[ind - 2]);
    //     }
    //     int curr = min(jumpOne, jumpTwo);
    //     prev2 = prev;
    //     prev = curr;
    // }
    // return prev;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << frogJump(arr);
}