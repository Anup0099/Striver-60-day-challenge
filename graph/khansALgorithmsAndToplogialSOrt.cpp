#include <bits/stdc++.h>
using namespace std;
int solve(int ind, int minJump, vector<vector<int>> &nums, vector<vector<int>> &dp, int k)
{
    // four directions
    int xdir[] = {0, 1, 0, -1};
    int ydir[] = {1, 0, -1, 0};
    int n = nums.size();
    int m = nums[0].size();
    int count = 0;
    if (ind == n - 1 && minJump == 0)
        return 1;
    if (ind >= n || minJump < 0)
        return 0;
    if (dp[ind][minJump] != -1)
        return dp[ind][minJump];
    for (int i = 0; i < 4; i++)
    {
        int x = ind + xdir[i];
        int y = minJump - ydir[i];
        if (x >= 0 && y >= 0 && x < n && y < m && nums[x][y] == 0)
        {

            count += solve(x, y, nums, dp, k);
            cout<<count<<" ";
        }
    }
    dp[ind][minJump] = count;
    if (count <= k)
        return count;
    return -1;
}
int jump(vector<vector<int>> &nums, int k)
{
    vector<vector<int>> dp(nums.size(), vector<int>(nums[0].size(), -1));
    return solve(0, 100001, nums, dp, k);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> v(n, vector<int>(m, 0));
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x][y] = 1;
    }
    cout << jump(v, k);
}