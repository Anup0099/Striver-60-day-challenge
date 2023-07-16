#include <bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>> &events, int i, int k,vector<vector<int >>&dp)
{
    int n = events.size();
    if (i >= n)
        return 0;
    int start = events[i][0];
    int end = events[i][1];
    int value = events[i][2];
    int skip = solve(events, i + 1, k,dp);
    // take
    int j = i + 1;
    for (; j < n; j++)
    {
        if (events[j][0] > end)
            break;
    }
    int take = solve(events, j, k - 1,dp) + value;
    return max(take, skip);
}
int maxValue(vector<vector<int>> &events, int k)
{
    int n = events.size();
    sort(events.begin(), events.end());
    vector<vector<int>>dp(n+1,vector<int>(k+1,0));
    return solve(events, 0, 0,dp);
}
int main() {}