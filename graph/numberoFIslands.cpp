#include <bits/stdc++.h>
using namespace std;
void bfs(vector<vector<char>> &grid, vector<vector<int>> &visited, int row, int col)
{
    visited[row][col] = 1;
    queue<pair<int, int>> q;
    q.push({row, col});
    while (!q.empty())
    {
        auto first = q.front().first;
        auto second = q.front().second;
        q.pop();
        // traversing in all 4 directions

        for (int delrow = -1; delrow <= 1; delrow++)
        {
            for (int delcol = -1; delcol <= 1; delcol++)
            {
                int nrow = first + delrow;
                int ncol = second + delcol;
                if (abs(delcol - delrow) == 1 and nrow > 0 and nrow < grid.size() and ncol > 0 and ncol < grid[0].size() and !visited[nrow][ncol] and grid[nrow][ncol] == '1')
                {
                    q.push({nrow, ncol});
                    visited[nrow][ncol] = 1;
                }
            }
        }
    }
}
int numIslands(vector<vector<char>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    int count = 0;
    vector<vector<int>> visited(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] and grid[i][j] == 1)
            {
                count++;
                bfs(grid, visited, i, j);
            }
        }
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}