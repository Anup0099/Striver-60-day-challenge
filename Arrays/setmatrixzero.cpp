#include <bits/stdc++.h>
using namespace std;
// vector<vector<int>> setmatrix(vector<vector<int>> &matrix)
// {
//     int n = matrix.size(), m = matrix[0].size();
//     vector<int> row(n, 0), col(m, 0);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 row[i] = 1;
//                 col[j] = 1;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (row[i] == 1 || col[j] == 1)
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//     }

//     return matrix;
// }
void markCol(vector<vector<int>> &matrix, int n, int m, int i)
{

    for (int k = 0; k < n; k++)
    {
        if (matrix[i][k] != 0)
        {
            matrix[i][k] = -1;
        }
    }
}
void markRow(vector<vector<int>> &matrix, int n, int m, int j)
{

    for (int i = 0; i < m; i++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}
void setZeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                markCol(matrix, n, m, i);
                markRow(matrix, n, m, j);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    setZeroes(matrix);
    return 0;
}