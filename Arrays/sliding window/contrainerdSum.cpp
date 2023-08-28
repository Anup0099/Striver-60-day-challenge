#include <bits/stdc++.h>
using namespace std;
// Given an integer array nums and an integer k, return the maximum sum of a non-empty subsequence of that array such that for every two consecutive integers in the subsequence, nums[i] and nums[j], where i < j, the condition j - i <= k is satisfied.

// A subsequence of an array is obtained by deleting some number of elements (can be zero) from the array, leaving the remaining elements in their original order.
int solve(int ind1, int ind2, vector<int> &nums, int k, int sum)
{
    if (ind2 - ind1 > k)
    {
        return 0;
    }
    if (ind2 == nums.size())
    {
        return sum;
    }
    int nottaken = solve(ind1, ind2 + 1, nums, k, sum);
    int take = 0;
    if (ind2 - ind1 <= k)
    {
        take = solve(ind1, ind2 + 1, nums, k, sum + nums[ind2]);
    }
    return max(take, nottaken);
}
int constrainedSum(vector<int> &nums, int k)
{

    // find all subsequences of length k
    // find max sum of all subsequences and check if j-i<=k
    int n = nums.size();
    int ind1=0,ind2=0,sum=0;
    return solve(ind1, ind2, nums, k, sum);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums = {10, 2, -10, 5, 20};
    int k = 2;
    cout << constrainedSum(nums, k);
}