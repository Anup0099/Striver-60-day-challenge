#include <bits/stdc++.h>
using namespace std;
int maxColumn(vector<vector<int>> res, int i, int j)
{
    int n = res.size();
    int m = res[0].size();
    int x = INT_MIN;
    for (int k = 0; k < n; k++)
    {
        if (res[k][j] != -1)
        {
            x = max(x, res[k][j]);
        }
    }
    for (int k = 0; k < n; k++)
    {
        if (res[k][j] == -1)
        {
            res[k][j] = x;
        }
    }
    return x;
}
vector<vector<int>> modifiedMatrix(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> res(n, vector<int>(m, -2));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            res[i][j] = matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (res[i][j] == -1)
            {
                int x = maxColumn(res, i, j);
                res[i][j] = x;
            }
        }
    }
    return res;
}
int main()
{
    // [[2,-1,2,-1,2],[1,0,-1,2,-1],[2,-1,-1,-1,2],[2,1,2,-1,2],[0,1,0,0,0],[0,0,0,0,-1],[2,-1,2,2,0],[0,1,0,2,2],[2,2,0,1,-1]]
    vector<vector<int>> matrix ={{2,-1,2,-1,2},{1,0,-1,2,-1},{2,-1,-1,-1,2},{2,1,2,-1,2},{0,1,0,0,0},{0,0,0,0,-1},{2,-1,2,2,0},{0,1,0,2,2},{2,2,0,1,-1}}; //{{1, 2, 3}, {4, 5, 6}, {7, 8, 9
    vector<vector<int>> res = modifiedMatrix(matrix);
    for (auto i : res)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}