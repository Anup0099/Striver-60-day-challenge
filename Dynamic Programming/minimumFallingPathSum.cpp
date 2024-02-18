#include <bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>> &matrix, int row, int col)
{
    // base case
    if (row == 0)
        return matrix[row][col];
    if (col < 0 || col >= matrix[0].size())
        return 1e9;
    int sum = INT_MAX;
    int s = matrix[row][col] + solve(matrix, row - 1, col);
    int ld = matrix[row][col] + solve(matrix, row - 1, col - 1);
    int rd = matrix[row][col] + solve(matrix, row - 1, col + 1);
    sum = min(sum, min(s, min(ld, rd)));
    return sum;
}
int minFallingPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> dp(n, vector<int>(m, 0));
    // bottom up approach
    for (int i = 0; i < m; i++)
    {
        dp[0][i] = matrix[0][i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int s = dp[i - 1][j];
            int ld = (j - 1 >= 0) ? dp[i - 1][j - 1] : 1e9;
            int rd = (j + 1 < m) ? dp[i - 1][j + 1] : 1e9;
            dp[i][j] = matrix[i][j] + min(s, min(ld, rd));
        }
    }
    int ans = INT_MAX;
    for (int i = 0; i < m; i++)
    {
        ans = min(ans, dp[n - 1][i]);
    }
    return ans;
}
int main()
{
    vector<vector<int>> matrix = {{2, 1, 3}, {6, 5, 4}, {7, 8, 9}};
    cout << minFallingPathSum(matrix) << endl;
    return 0;
}