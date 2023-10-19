#include <bits/stdc++.h>
using namespace std;
int rottenOranges(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    int time = 0;

    queue<pair<pair<int, int>, int>> q;
    vector<vector<int>> vis;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 2)
            {
                q.push({{i, j}, 0});

                vis[i][j] = 1;
            }
        }
    }

    int delrow[] = {-1, 0, 1, 0};
    int delcol[] = {0, 1, 0, -1};

    while (!q.empty())
    {
        int row = q.front().first.first;
        int col = q.front().first.second;
        int t = q.front().second;
        time = max(time, t);
        for (int i = 0; i < 4; i++)
        {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];

            if (nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and grid[nrow][ncol] == 1 and vis[nrow][ncol] != 2)
            {
                q.push({{nrow, ncol}, t + 1});
                vis[nrow][ncol] = 2;
            }
        }
    }
    // check if all oranges cant be reached
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1 and vis[i][j] != 2)
            {
                return -1;
            }
        }
    }
    return time;
}
int main() {}