#include <bits/stdc++.h>
using namespace std;
// print all permutation
void solve(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int feq[])
{
    if (ds.size() == nums.size())
    {
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (!feq[i])
        {
            ds.push_back(nums[i]);
            feq[i] = 1;
            solve(ds, nums, ans, feq);
            feq[i] = 0;
            ds.pop_back();
        }
    }
}
vector<vector<int>> permutate(vector<int> &nums)
{
    vector<vecotr<int>> &ans;
    vector<int> ds;
    int feq[nums.size()];
    for (int i = 0; i < nums.size(); i++)
    {
        feq[i] = 0;
    }
    solve(ds, nums, ans, feq);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}