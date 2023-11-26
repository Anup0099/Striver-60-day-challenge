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
int main() {}