/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
int dfs(vector<vector<int>> &grid, int i, int j, int n, int m)
{
    if (i < 0 or j < 0 or i > n or j > m or grid[i][j] == 0)
        return 0;
    int ans = grid[i][j];
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};
    int curr = grid[i][j];
    for (int i = 0; i < 4; i++)
    {
        int nx = i + dx[i];
        int ny = j + dy[i];
        grid[i][j] = 0;
        ans = max(ans, curr + dfs(grid, nx, ny, n, m));
        grid[i][j] = curr;
    }
    return ans;
}
int getMaximumGold(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] != 0)
            {
                ans = max(ans, dfs(grid, i, j, n, m));
            }
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}