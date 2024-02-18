#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findMatrix(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int freq = mp[nums[i]];
        if (freq == ans.size())
        {
            ans.push_back({});
        }
        ans[freq].push_back(nums[i]);
        mp[nums[i]]++;
        
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    vector<vector<int>> ans = findMatrix(nums);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << ' ';
        }
        cout << endl;
    }
}