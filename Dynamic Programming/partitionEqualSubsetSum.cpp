#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
vector<int> solve(vector<int> &nums, int target, int i)
{
    int n = nums.size();
    // base case
    if (target == 0)
    {
        return ans; // found a valid subset
    }
    if (i == n or target < 0)
    {
        return {}; // reached end of array
    }

    ans.push_back(nums[i]); // include
    vector<int> include = solve(nums, target - nums[i], i + 1);
    if (!include.empty()) // if include is not empty then return include
    {
        return include;
    }
    ans.pop_back(); // exclude
    vector<int> exlude = solve(nums, target, i + 1);

    return exlude;
}
// bool canPartition(vector<int> &nums)
// {
//     int n = nums.size();
//     int sum = accumulate(begin(nums), end(nums), 0);
//     int target = sum / 2;
//     if (target * 2 != sum)
//     {
//         return false;
//     }
//     vector<int> ans = solve(nums, target, 0);
//     int sum1 = 0;
//     for (int i = 0; i < ans.size(); i++)
//     {
//         sum1 += ans[i];
//     }
//     if (sum1 == target)
//     {
//         return true;
//     }
//     return false;
// }
bool solve(vector<int> &nums, vector<int> &ans, int target, int i)
{
    if (target == 0)
    {
        // Found a valid subset
        return true;
    }
    if (i == nums.size() || target < 0)
    {
        // Reached the end of the array or the target is negative
        return false;
    }

    // Include the current number in the subset
    ans.push_back(nums[i]);
    bool found = solve(nums, ans, target - nums[i], i + 1);
    if (found)
    {
        return true;
    }

    // Exclude the current number from the subset
    ans.pop_back();
    bool notFound = solve(nums, ans, target, i + 1);
    return notFound;
}

bool subsetSumTok(vector<int> &nums, int k)
{
    vector<bool> prev(k + 1, 0), curr(k + 1, 0);
}
bool canPartition(vector<int> &nums)
{
    int n = nums.size();
}
int main()
{
    vector<int> nums = {1, 5, 11, 5};
    cout << canPartition(nums) << endl;
}