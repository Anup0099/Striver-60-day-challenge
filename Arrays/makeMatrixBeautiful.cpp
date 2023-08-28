#include <bits/stdc++.h>
using namespace std;
int findMinOpeartion(vector<vector<int>> matrix, int n)
{
    // code here
    int sum = 0, maxSumRow = INT_MIN, maxSumCol = INT_MIN;
    vector<int> row;
    for (int i = 0; i < n; i++)
    {
        int rowSum = 0;
        int colSum = 0;
        for (int j = 0; j < n; j++)
        {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
        }
        row.push_back(rowSum);
        maxSumRow = max(maxSumRow, rowSum);
        maxSumCol = max(maxSumCol, colSum);
    }
    int maxiOFMax = max(maxSumRow, maxSumCol);
    int total = 0;
    for (auto it : row)
    {
        cout << it << " ";
    }
    for (int i = 0; i < n; i++)
    {
        total += maxiOFMax - row[i];
    }
    return total;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 2, 3}, {3, 2, 1}};
    cout << findMinOpeartion(matrix, 3);
}