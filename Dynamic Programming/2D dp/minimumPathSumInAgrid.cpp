#include <bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>> &maze, int i, int j, vector<vector<int>> &dp)
{
    if (i == 0 and j == 0)
        return maze[0][0];
    if (i < 0 and j < 0)
        return INT_MAX;
    if (dp[i][j] != -1)
        return dp[i][j];
    int up = INT_MAX, left = INT_MAX;
    if (i > 0)
    {
        up = maze[i][j] + solve(maze, i - 1, j, dp);
    }
    if (j > 0)
    {
        left = maze[i][j] + solve(maze, i, j - 1, dp);
    }
    return dp[i][j] = min(up, left);
}
int minimumPathSum(vector<vector<int>> &maze)
{
    int n = maze.size();
    int m = maze[0].size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    return solve(maze, n - 1, m - 1, dp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<vector<int>> matrix{{5, 9, 6},
                            {11, 5, 2}};

    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    cout << solve(matrix, n - 1, m - 1, dp);
}