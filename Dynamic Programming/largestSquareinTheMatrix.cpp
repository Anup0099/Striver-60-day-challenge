/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
int largestSquare(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    int ans = 0;
    vector<vector<int>> dp(n, vector<int>(m, 0));
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
                ans = max(ans, dp[i][j]);
            }
        }
    }
    return ans * ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}