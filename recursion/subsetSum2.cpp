#include <bits/stdc++.h>
using namespace std;
void solve(int ind, vector<int> &nums, vector<int> ds, <vector<int>> &ans)
{
    ans.push_back(ds);
    for (int i = ind; i < nums.size(); i++)
    {
        if (i != ind and nums[i] == nums[i - 1])
            continue;
        ds.push_back(nums[i]);
        solve(i + 1, nums, ds, ans);
        ds.pop_back();
    }
}

vector<vector<int>> subsetSum2(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    vector<int> ds;
    solve(0, nums, ds, ans);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}