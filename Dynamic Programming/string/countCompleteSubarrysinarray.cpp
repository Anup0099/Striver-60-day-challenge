#include <bits/stdc++.h>
using namespace std;
// You are given an array nums consisting of positive integers.

// We call a subarray of an array complete if the following condition is satisfied:

// The number of distinct elements in the subarray is equal to the number of distinct elements in the whole array.
// Return the number of complete subarrays.

// A subarray is a contiguous non-empty part of an array.
int countCompleteSubarrays(vector<int> &nums)
{
    int n = nums.size();
    set<int> s1;
    for (int &num : nums)
    {
        s1.insert(num);
    }
    int size = s1.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        set<int> s2;
        for (int j = i; j < n; j++)
        {
            s2.insert(nums[j]);
            if (s2.size() == size)
                count++;
        }
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}