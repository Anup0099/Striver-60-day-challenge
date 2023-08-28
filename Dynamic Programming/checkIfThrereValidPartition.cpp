#include <bits/stdc++.h>
using namespace std;
bool solve(int ind, vector<int> &nums, vector<int> &dp)
{
    int n = nums.size();
    if (ind >= n)
    {
        return true;
    }
    bool result = false;
    if (nums[ind] == nums[ind + 1])
    {
        result = solve(ind + 1, nums, dp);
    }
    if (result == true)
    {
        return true;
    }
    if (nums[ind] == nums[ind + 1] and nums[ind + 1] == nums[ind + 2])
    {
        result = solve(ind + 2, nums, dp);
    }
    if (result == true)
    {
        return true;
    }
    if (nums[ind + 1] - nums[ind] == 1 and nums[ind + 2] - nums[ind + 1] == 1)
    {
        result = solve(ind + 2, nums, dp);
    }

    return result;
}
bool validPartition(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n + 1, -1);
    return solve(0, nums, dp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}