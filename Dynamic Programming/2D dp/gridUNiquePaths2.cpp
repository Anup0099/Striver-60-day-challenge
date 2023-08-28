#include <bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>> &maze, int n, int m, int i, int j, vector<vector<int>> dp)
{
    if (i > 0 and j > 0 and maze[i][j] == -1)
        return 0;
    if (i == 0 and j == 0)
        return 1;
    if (i < 0 or j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    int up = solve(maze, n, m, i - 1, j, dp);
    int left = solve(maze, n, m, i, j - 1, dp);

    return dp[i][j] = up + left;
}
int mazeObstacle(vector<vector<int>> &maze)
{
    int n = maze.size();
    int m = maze[0].size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (maze[i][j] == -1 && i > 0 && j > 0)
            {
                dp[i][j] = 0;
                continue;
            }
            if (i == 0 && j == 0)
            {
                dp[i][j] = 1;
                continue;
            }
            int up = 0, left = 0;
            if (i > 0)
            {
                up = dp[i - 1][j];
            }
            if (j > 0)
            {
                left = dp[i][j - 1];
            }
            dp[i][j] = up + left;
        }
    }
    return dp[n - 1][m - 1];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<vector<int>> maze = {{0, 0, 0}, {0, -1, 0}, {0, 0, 0}};
    cout << mazeObstacle(maze);
}