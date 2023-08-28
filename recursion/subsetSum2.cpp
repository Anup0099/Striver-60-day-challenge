#include <bits/stdc++.h>
using namespace std;
void solve(int ind, vector<int> &nums, vector<int> ds, vector<vector<int>> &ans)
{
    if (ind == nums.size())
    {
        sort(ds.begin(), ds.end());
        ans.push_back(ds);
        return;
    }
    ds.push_back(nums[ind]);
    solve(ind + 1, nums, ds, ans);
    ds.pop_back();
    solve(ind + 1, nums, ds, ans);
}

vector<vector<int>> subsetSum2(vector<int> &nums)
{
    int n = nums.size();
    
    vector<vector<int>> ans;
    set<vector<int>> s;

    vector<int> ds;
    solve(0, nums, ds, ans);
    for (auto it = s.begin(); it != s.end(); it++)
    {
        ans.push_back(*it);
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}