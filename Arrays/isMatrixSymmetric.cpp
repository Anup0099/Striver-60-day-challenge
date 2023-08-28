#include <bits/stdc++.h>
using namespace std;
bool isSymmetricMatrix(vector<vector<int>> &matrix)
{
    int n = matrix.size(), m = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                return false;
            }
        }
    }
    return true;
}
int coverageOfMatrix(vector<vector<int>> &mat)
{
    int n = mat.size(), m = mat[0].size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 1)
            {
                if (i + 1 < n and mat[i + 1][j] == 0)
                {
                    count++;
                }
                if (i - 1 >= 0 and mat[i - 1][j] == 0)
                {
                    count++;
                }
                if (j + 1 < m and mat[i][j + 1] == 0)
                {
                    count++;
                }
                if (j - 1 >= 0 and mat[i][j - 1] == 0)
                {
                    count++;
                }
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
    vector<vector<int>> mat = {{1, 0},
                               {0, 1}};
    cout << coverageOfMatrix(mat);
}