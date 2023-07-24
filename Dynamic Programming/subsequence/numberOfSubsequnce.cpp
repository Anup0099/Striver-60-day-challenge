#include <bits/stdc++.h>
using namespace std;
int findTheNumberOfSubsequence(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n, 1);
    int maxLength = 1;
    int result = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[i] > nums[j])
            {
                if (dp[j] + 1 > dp[i])
                {
                    dp[i] = dp[j] + 1;
                }
            }
        }
        maxLength = max(maxLength, dp[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (dp[i] == maxLength)
        {
            result++;
        }
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}