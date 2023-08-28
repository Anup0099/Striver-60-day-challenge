#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> arr, int n, int ind, int sum, vector<int> &ans)
{
    // if (ind == n)
    // {
    //     ans.push_back(sum);
    //     return;
    // }
    // sum += arr[ind];
    // solve(arr, n, ind + 1, sum, ans);
    // sum -= arr[ind];
    // solve(arr, n, ind + 1, sum, ans);
    if (ind == n)
    {
        ans.push_back(sum);
        return;
    }
    solve(arr, n, ind + 1, sum + arr[ind], ans);
    solve(arr, n, ind + 1, sum, ans);
}
vector<int> subsetsum(vector<int> arr, int n)
{
    int sum = 0;
    vector<int> ans;
    solve(arr, n, 0, sum, ans);
    return ans;
}
void f(vector<int> nums, int ind, vector<int> &temp, vector<vector<int>> &ans)
{
    ans.push_back(temp);
    for (int i = ind; i < nums.size(); i++)
    {
        if (i != ind and nums[ind] == nums[ind + 1])
        {
            continue;
        }
        temp.push_back(nums[i]);
        f(nums, ind + 1, temp, ans);
        temp.pop_back();
        f(nums, ind + 1, temp, ans);
    }
}
vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> temp;
    f(nums, 0, temp, ans);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> arr = {2, 3};
    int n = arr.size();
    vector<int> ans = subsetsum(arr, n);
    for (auto i : ans)
        cout << i << " ";
}