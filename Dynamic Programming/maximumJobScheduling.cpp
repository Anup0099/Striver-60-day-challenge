#include <bits/stdc++.h>
using namespace std;
int n;
int getNext(vector<vector<int>> &array, int l, int target)
{
    int r = n - 1;
    int ans = n + 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (array[mid][0] >= target)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}
int solve(vector<vector<int>> &array, vector<int> &dp, int i)
{
    if (i >= n)
    {

        return 0;
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }
    int next = getNext(array, i, array[i][1]);
    int take = array[i][2] + solve(array, dp, next);
    int nottake = solve(array, dp, i + 1);
    return dp[i] = max(take, nottake);
}

int jobScehduling(vector<int> &startTime, vector<int> &endTime, vector<int> &profit)
{
    n = startTime.size();
    int m = endTime.size();
    int o = profit.size();
    vector<vector<int>> array(n, vector<int>(3, 0));
    for (int i = 0; i < n; i++)
    {
        array[i][0] = startTime[i];
        array[i][1] = endTime[i];
        array[i][2] = profit[i];
    }
    sort(array.begin(), array.end());
    vector<int> dp(n + 1, -1);
    return solve(array, dp, 0);
}
int main()
{
    vector<int> startTime = {1, 2, 3, 3};
    vector<int> endTime = {3, 4, 5, 6};
    vector<int> profit = {50, 10, 40, 70};
    cout << jobScehduling(startTime, endTime, profit);
    return 0;
}