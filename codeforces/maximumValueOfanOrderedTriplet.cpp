#include <bits/stdc++.h>
using namespace std;
// You are given a 0-indexed integer array nums.

// Return the maximum value over all triplets of indices (i, j, k) such that i < j < k. If all such triplets have a negative value, return 0.

// The value of a triplet of indices (i, j, k) is equal to (nums[i] - nums[j]) * nums[k].
long long maximumTripletValue(vector<int> &nums)
{
    int n = nums.size();
    long long maxi = 0;
    vector<long long> max1(n, 0);
    vector<long long> max2(n, 0);
    max1[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        max1[i] = max(max1[i - 1], (long long)nums[i]);
    }
    max2[n - 2] = nums[n - 1];
    for (int i = n - 3; i >= 0; i--)
    {
        max2[i] = max(max2[i + 1], (long long)nums[i + 1]);
    }
    for(int i=1;i<n-1;i++)
    {
        long long val = max1[i-1]-nums[i];
        if(val>0)
        {
            maxi = max(maxi, val*max2[i]);
        }
    }
    return maxi;
}
int main() {}