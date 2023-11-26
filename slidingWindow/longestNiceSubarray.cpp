#include <bits/stdc++.h>
using namespace std;
// You are given an array nums consisting of positive integers.

// We call a subarray of nums nice if the bitwise AND of every pair of elements that are in different positions in the subarray is equal to 0.

// Return the length of the longest nice subarray.

// A subarray is a contiguous part of an array.

// Note that subarrays of length 1 are always considered nice.
int longestNiceSubarray(vector<int> &nums)
{
    int i = 0;
    int j = 0;
    int ans = 0;
    int an = 0;
    while (j < nums.size())
    {
        int x = an & nums[j];
        if (x == 0)
        {
            ans = max(ans, j - i + 1);
            an |= nums[j];
            j++;
        }
        else
        {
            an ^= nums[i];
            i++;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 3, 8, 48, 10};
    cout << longestNiceSubarray(nums);
}