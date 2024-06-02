#include <bits/stdc++.h>
using namespace std;
long long minCost(vector<int> &nums, int x)
{
    long long ans = 0;
    int n = nums.size();
    vector<vector<int>> v(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        v[0][i] = nums[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j - 1 >= 0)
            {
                v[i][j] = v[i - 1][j - 1];
            }
            else
            {
                v[i][j] = v[i - 1][n - 1];
            }
        }
    }
    vector<int> col(n, 0);
    for (int i = 0; i < n; i++)
    {
        col[0] = v[0][i];
        ans += (long long)v[0][i];
    }
    long long rans = ans;
    for (int i = 1; i < n; i++)
    {
        long long cans = ans;
        cans += (long long)x;
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] < col[j])
            {
                cans -= col[j];
                col[j] = v[i][j];
                cans += v[i][j];
            }
        }
        rans = min(cans, rans);
        ans = cans;
    }
    return rans;
}
int main()
{
    // [31,25,18,59]
    // 27
    vector<int> nums = {20, 1, 15};
    int x = 5;
    cout << minCost(nums, x) << endl;
}