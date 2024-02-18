#include <bits/stdc++.h>
using namespace std;
vector<int> search(vector<vector<int>> &nums, int target)
{
    int n = nums.size();
    int m = nums[0].size();
    for (int i = 0; i < n; i++)
    {
        int first = nums[i][0];
        int last = nums[i][m - 1];
        if (last > target)
        {
            int ans = binary_search(nums[i].begin(), nums[i].end(), target);
            return {i, ans};
        }
    }
    return {-1, -1};
}
vector<int> search2(vector<vector<int>> &nums, int target)
{
    int n = nums.size();
    int m = nums[0].size();
    int low = 0, high = n * m - 1;
    while(low<=high)
    {
        int mid= low+(high-low)/2;
        
    }
}
int main()
{
    vector<vector<int>> nums = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;
    vector<int> ans = search(nums, target);
    cout << ans[0] << " " << ans[1];
}