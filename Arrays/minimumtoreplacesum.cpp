#include <bits/stdc++.h>
using namespace std;
// You are given two arrays nums1 and nums2 consisting of positive integers.

// You have to replace all the 0's in both arrays with strictly positive integers such that the sum of elements of both arrays becomes equal.

// Return the minimum equal sum you can obtain, or -1 if it is impossible.
int minimumPossibleSum(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size();
    int m = nums2.size();
    int sum1 = 0;
    int sum2 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += nums1[i];
        if (nums1[i] == 0)
        {
            count1++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        sum2 += nums2[i];
        if (nums2[i] == 0)
        {
            count2++;
        }
    }
    if ((count1 == 0 and sum1 - count2 < count2) || (count2 == 0 and sum2 - count1 < count1))
    {
        return -1;
    }
    else
    {
        return max(sum1 + count1, sum2 + count2);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums1 = {2, 2, 2, 2};
    vector<int> nums2 = {2, 2, 2, 2};
    cout << minimumPossibleSum(nums1, nums2);
}