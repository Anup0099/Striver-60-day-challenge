#include <bits/stdc++.h>
using namespace std;
int numberOfUiqueFalvourOfCandies(vector<int> &nums, int k)
{
    int n = nums.size();
    int i = 0;
    int result = nums.size();
    unordered_map<int, int> mp;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(nums[i]) == mp.end())
        {
            mp[nums[i]] = 1;
            total++;
        }
        else
        {
            mp[nums[i]]++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        mp[nums[i]]--;
        if (mp[nums[i]] == 0)
        {
            total--;
        }
    }
    result = total;
    for (i = k; i < n; i++)
    {
        mp[nums[i]]--;
        mp[nums[i - k]]++;
        if (mp[nums[i]] == 0)
        {
            total--;
        }
        if (mp[nums[i - k]] == 1)
        {
            total++;
        }
        result = max(result, total);
    }
    return result;
}
int main() {}