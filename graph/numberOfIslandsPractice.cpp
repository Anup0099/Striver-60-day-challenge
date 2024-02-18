#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<char>> grid, vector<vector<bool>> visited, int i, int j)
{
    visited[i][j] = true;
    int n = grid.size();
    int m = grid[0].size();
    queue<pair<int, int>> q;
    q.push({i, j});
    while (!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        for (int delrow = -1; delrow <= 1; delrow++)
        {
            for (int delcol = -1; delcol <= 1; delcol++)
            {
                int nrow = row + delrow;
                int ncol = col + delcol;
                // out of bound check
                if (nrow >= 0 and nrow <n and ncol>=0 and ncol<m and !visited[nrow][ncol] and grid[nrow][ncol]=='1')
                {
                    visited[nrow][ncol] = true;
                    q.push({nrow, ncol});
                }
            }
        }
        
    }
}

int numIslands(vector<vector<char>> &grid)
{
    // Code here
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '1' and !visited[i][j])
            {
                bfs(grid, visited, i, j);
                count++;
            }
        }
    }
    return count;
}
int main() {}