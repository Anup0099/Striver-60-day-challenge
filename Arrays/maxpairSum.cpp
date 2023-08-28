#include <bits/stdc++.h>
using namespace std;
// You are given a 0-indexed integer array nums. You have to find the maximum sum of a pair of numbers from nums such that the maximum digit in both numbers are equal.

// // Return the maximum sum or -1 if no such pair exists.
// Input: nums = [51,71,17,24,42]
// Output: 88
// Explanation: 
// For i = 1 and j = 2, nums[i] and nums[j] have equal maximum digits with a pair sum of 71 + 17 = 88. 
// For i = 3 and j = 4, nums[i] and nums[j] have equal maximum digits with a pair sum of 24 + 42 = 66.
// It can be shown that there are no other pairs with equal maximum digits, so the answer is 88.
int maxSum(vector<int> &nums)
{
    int n = nums.size();
    vector<int> maxDigit(n, 0);
    for (int i = 0; i < n; i++)
    {
        int temp = nums[i];
        while (temp)
        {
            // here we are storing the max digit of each number in the array
                
            maxDigit[i] = max(maxDigit[i], temp % 10);
            temp /= 10;
        }
    }
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1;j<n;j++)
        {
            if (maxDigit[i] == maxDigit[j])
            {
                ans = max(ans, nums[i] + nums[j]);
            }
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}