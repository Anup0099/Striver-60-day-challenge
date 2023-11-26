#include <bits/stdc++.h>
using namespace std;
//  You are given a 0-indexed integer array nums of length n.

// We want to group the indices so for each index i in the range [0, n - 1], it is assigned to exactly one group.

// A group assignment is valid if the following conditions hold:

// For every group g, all indices i assigned to group g have the same value in nums.
// For any two groups g1 and g2, the difference between the number of indices assigned to g1 and g2 should not exceed 1.
// Return an integer denoting the minimum number of groups needed to create a valid group assignment.
int minGroupForValidAssignment(vector<int> &nums)
{
    int n = nums.size();
}
// You are given a 0-indexed array nums of integers.

// A triplet of indices (i, j, k) is a mountain if:

// i < j < k
// nums[i] < nums[j] and nums[k] < nums[j]
// Return the minimum possible sum of a mountain triplet of nums. If no such triplet exists, return -1.
int minimumSum(vector<int> &nums)
{
    int n = nums.size();
    int minSum = INT_MAX;
}
bool all(vector<int> &counter)
{
    for (int i = 0; i < 26; i++)
    {
        if (counter[i] != 0)
        {
            return false;
        }
    }
    return true;
}
int countOccuranceOfAnagram(string pat, string s)
{
    int n = s.length();
    int m = pat.length();
    int result = 0;
    int i = 0, j = 0;
    vector<int> counter(26, 0);
    for (int i = 0; i < n; i++)
    {
        counter[s[i] - 'a']++;
    }
    while (j < n)
    {
        counter[s[j] - 'a']--;
        if (j - i + 1 == m)
        {
            if (all(counter))
            {
                result++;
            }
            counter[s[i] - 'a']++;
            i++;
        }
        j++;
    }
    return result;
}
int minNumberOfValidAssignment(vector<int> &nums)
{
    int n = nums.size();
    int ans = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }
    vector<int> arr;
    for (auto it : mp)
    {
        arr.push_back(it.second);
    }
    sort(begin(arr), end(arr));
    for (int i = 1; i <= arr[0]; i++)
    {
        int a = i, b = i + 1;
        int num = 0;
        bool bad = false;
        for (int j = 0; j < n; j++)
        {
            int curr = arr[j];
            int count = 0;
            int mn = INT_MAX;
            while (curr >= 0)
            {
                if (curr % a == 0)
                {
                    mn = count + curr / a;
                }
                curr -= b;
                count++;
            }
            if (mn == INT_MAX)
            {
                // matlab aisa koi group nahi mila

                bad = true;
                break;
            }
            num += mn;
        }
        if (!bad)
        {
            ans = min(ans, num);
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {3, 2, 3, 2, 3};
    cout << minGroupForValidAssignment(nums);
    return 0;
}