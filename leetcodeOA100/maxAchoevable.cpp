#include <bits/stdc++.h>
using namespace std;
// You are given a 0-indexed array nums of n integers and an integer target.

// You are initially positioned at index 0. In one step, you can jump from index i to any index j such that:

// 0 <= i < j < n
// -target <= nums[j] - nums[i] <= target
// Return the maximum number of jumps you can make to reach index n - 1.

// If there is no way to reach index n - 1, return -1.
int f(int i, vector<int> &nums, int target, int jumps)
{
    if (i == nums.size() - 1)
        return jumps;
    if (target <= 0)
        return -1;
    int ans = INT_MIN;
    for (int j = i + 1; j < nums.size(); j++)
    {
        if (abs(nums[j] - nums[i]) <= target)
        {
            ans = max(ans, f(j, nums, target, jumps + 1));
        }
    }
    return ans;
}
int maximumJumps(vector<int> &nums, int target)
{
    return f(0, nums, target, 0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}