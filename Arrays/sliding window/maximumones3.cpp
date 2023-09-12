#include <bits/stdc++.h>
using namespace std;
int countones(vector<int> v, int k)
{
    int n = v.size();
    int countZero = 0, ans = INT_MIN;
    int i = 0, j = 0;
    while (j < n)
    {
        if (v[j] == 0)
        {
            countZero++;
        }
        while (countZero > k)
        {
            if (v[i] == 0)
                countZero--;
            i++;
        }
        ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
}
// Given a binary array nums, you should delete one element from it.

// Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.
int longestSubarray(vector<int> &nums)
{
    int n = nums.size();
    int i = 0, j = 0;
    int countZero = 0, ans = INT_MIN;
    while (j < n)
    {
        if (nums[j] == 0)
        {
            countZero++;
        }
        while (countZero > 1)
        {
            if (nums[i] == 0)
            {
                countZero--;
            }
            i++;
        }
        ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
}
int main() {}