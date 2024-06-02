#include <bits/stdc++.h>
using namespace std;
void solve(int start, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans)
{
    // if (ind == nums.size())
    // {
    //     sort(ds.begin(), ds.end());
    //     ans.push_back(ds);
    //     return;
    // }
    // ds.push_back(nums[ind]);
    // solve(ind + 1, nums, ds, ans);
    // ds.pop_back();
    // solve(ind + 1, nums, ds, ans);
    ans.push_back(ds);
    for (int i = start; i < nums.size(); i++)
    {
        ds.push_back(nums[i]);

        solve(i + 1, nums, ds, ans);
        ds.pop_back();
    }
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
vector<vector<int>> sub(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> ds;
    solve(0, nums, ds, ans);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans = sub(arr);
    for (auto x : ans)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}