#include <bits/stdc++.h>
using namespace std;
int minCount = INT_MAX;
void solve(int i, int j, int remain, vector<int> &nums, int k)
{
    int count = 0;
    if (k == 0)
    {
        minCount = min(minCount, count);
    }
    if (i > j)
    {
        return;
    }
    if (remain < 0 || i > j || count >=minCount)
    {
        return;
    }
    else
    {
        solve(i + 1, j, remain + nums[i], nums, k);
        solve(i, j - 1, remain + nums[j], nums, k);
    }
}
int minimumOperation(vector<int> nums, int k)
{
    int n = nums.size();

    int i = 0, j = n - 1;
    int remain = 0; // remaining sum of array
    solve(i, j, remain, nums, k);
    return minCount;
}
int main() {
    vector<int> nums = {1, 5, 2, 3, 4};
    int k = 5;
    cout << minimumOperation(nums, k);
    return 0;
}