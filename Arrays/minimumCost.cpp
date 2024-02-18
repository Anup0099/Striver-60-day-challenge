#include <bits/stdc++.h>
using namespace std;
// You are given an array of integers nums of length n.

// The cost of an array is the value of its first element. For example, the cost of [1,2,3] is 1 while the cost of [3,4,1] is 3.

// You need to divide nums into 3 disjoint contiguous subarrays.

// Return the minimum possible sum of the cost of these subarrays.

// Note that disjoint means that every element in each array is not in any of the other arrays.
int maxFrequencyElements(vector<int> &nums)
{
    map<int, int> m;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        m[nums[i]]++;
    }
    vector<int> ans;

    for (auto it : m)
    {
        ans.push_back(it.second);
    }
    int max = *max_element(ans.begin(), ans.end());
    int c = count(ans.begin(), ans.end(), max);
    int f = *find(begin(ans), end(ans), max);
    return c * max;
}
int minimumCost(vector<int> &nums)
{
    int n = nums.size();
    int ans = nums[0] + nums[1] + nums[2];
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ans = min(ans, nums[0] + nums[i] + nums[j]);
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3, 12};
    cout << minimumCost(nums) << endl;
    return 0;
}