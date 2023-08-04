#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> directions{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int dfs(vector<vector<int>> &grid, int i, int j, int &m, int &n)
{
    if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0)
    {
        return 0;
    }

    int count = 1;
    grid[i][j] = 0;
    for (vector<int> &dir : directions)
    {
        int i_ = i + dir[0];
        int j_ = j + dir[1];
        count += dfs(grid, i_, j_, m, n);
    }

    return count;
}
int maxAreaOfIsland(vector<vector<int>> &grid)
{
    int maxArea = 0;
    int m = grid.size();
    int n = grid[0].size();

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1)
            {
                maxArea = max(maxArea, dfs(grid, i, j, m, n));
            }
        }
    }

    return maxArea;
}

// bfs approach
int bfs(vector<vector<int>> &grid, queue<pair<int, int>> q, vector<vector<int>> &directions, int m, int n)
{
    int maxArea = 0;
    int size = 0;

    while (!q.empty())
    {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();
        size++;
        for (vector<int> &dir : directions)
        {
            int i_ = i + dir[0];
            int j_ = j + dir[1];

            if (i_ < 0 || i_ >= m || j_ < 0 || j_ >= n || grid[i_][j_] == 0)
            {
                continue;
            }
            grid[i_][j_] = 0;
            q.push({i_, j_});
        }
    }
    return maxArea;
}
int maxAreaOfIslandBfs(vector<vector<int>> &grid)
{
    int m = grid.size(), n = grid[0].size();
    int maxArea = 0;
    queue<pair<int, int>> q;
    vector<vector<int>> directions{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    return bfs(grid, q, directions, m, n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}