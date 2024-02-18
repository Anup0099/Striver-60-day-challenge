#include <bits/stdc++.h>
using namespace std;
int longestSubarrayOfk(vector<int> &nums, int k)
{
    int n = nums.size();
    unordered_map<int, int> mp;
    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        int rem = sum - k;
        if (mp.find(rem) != mp.end())
        {
            int len = i - mp[rem];
            maxLen = max(maxLen, len);
        }
        mp[sum] = i;
    }
    return maxLen;
}
int longestSubarraySum(vector<int> &nums, int k)
{
    int n = nums.size();
    int i = 0, j = 0;
    int count = 0;
    int sum = 0;
    int maxi = INT_MIN;
    while (j < n)
    {
    //    for negetive numbers
        
    }
    return maxi;
    // time complexity: O(n) because we are using two pointers and we are traversing the array only once so time complexity is O(n) if sum>k then we are removing elements from the start of the array so time complexity is O(n) so overall time complexity is O(n)
}
int main()
{
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    cout << longestSubarraySum(nums, k);
}
