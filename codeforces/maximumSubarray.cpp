#include <bits/stdc++.h>
using namespace std;
int maximumSubarraySumWithDistinct(vector<int> &nums, int k)
{
    int n = nums.size();
    int i = 0, j = 0;
    int sum = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 == 0)
        {
            v[i] = nums[i] - 1;
        }
        else
        {
            v[i] = nums[i];
        }
    }
    
    // now we have to find the maximum subarray sum of size k of unique elements
    while (j < n)
    {
        if (v[j] == 0)
        {
            k--;
        }
        if (k < 0)
        {
            if (v[i] == 0)
            {
                k++;
            }
            i++;
        }
        sum = max(sum, j - i + 1);
        j++;
    }
    return sum;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << maximumSubarraySumWithDistinct(nums, k);
}