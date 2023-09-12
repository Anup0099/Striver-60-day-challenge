#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void solve(int ind, vector<int> &nums, int target, vector<int> &v, int sum)
{
    if (sum == target)
    {
        ans.push_back(v);
        return;
    }
    if (sum > target)
    {
        return;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        v.push_back(nums[i]);
        solve(i, nums, target, v, sum + nums[i]);
        v.pop_back();
    }
}
int combinationSum4(vector<int> &nums, int target)
{
    vector<int> v;
    int sum = 0;
    solve(0, nums, target, v, sum);
    return ans.size();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums = {1, 2, 3};
    int target = 4;
    cout << combinationSum4(nums, target);
}