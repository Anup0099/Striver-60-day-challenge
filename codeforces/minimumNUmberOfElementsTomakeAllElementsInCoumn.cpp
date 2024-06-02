/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
int minimumOperation(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    int ans = 0;
    int dp[10][m];
    for (int col = 0; col < m; col++)
    {
        for (int val = 0; val <= 9; val++)
        {
            int x = 0;
            for (int row = 0; row < n; row++)
            {
                if (arr[row][col] == val)
                {
                    x++;
                }
            }
            if (col == 0)
            {
                dp[val][col] = n - x;
            }
            else
            {
                int mn = INT_MAX;
                for (int i = 0; i <= 9; i++)
                {
                    if (i != val)
                    {
                        mn = min(mn, dp[i][col - 1]);
                    }
                }
                dp[val][col] = mn + n - x;
            }
        }
    }
    ans=INT_MAX;
    for(int i=0;i<=9;i++)
    {
        ans=min(ans,dp[i][m-1]);
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}