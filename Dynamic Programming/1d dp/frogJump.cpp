#include <bits/stdc++.h>
using namespace std;
int frogJump(vector<int> heights, vector<int> &dp, int ind)
{
    if (ind == 0)
        return 0;
    if (dp[ind] != -1)
        return dp[ind];
    int jumpOne = frogJump(heights, dp, ind - 1) + abs(heights[ind] - heights[ind - 1]);
    int jumpTwo = INT_MAX;
    if (ind > 1)
    {
        jumpTwo = frogJump(heights, dp, ind - 2) + abs(heights[ind] - heights[ind - 1]);
    }
    dp[ind] = min(jumpOne, jumpTwo);
    return dp[ind];
}
int main() {}