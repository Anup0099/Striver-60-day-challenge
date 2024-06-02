/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<string> board, int row, int col, int n)
{
    int duplicateRow = row;
    int duplicateCol = col;
    while (row >= 0 and col >= 0)
    {
        if (board[row][col] == 'Q')
        {
            return false;
        }
        row--;
        col--;
    }
    while (duplicateRow <= n and duplicateCol >= 0)
    {
        if (board[duplicateRow][duplicateCol] == 'Q')
        {
            return false;
        }
        duplicateRow++;
        duplicateCol--;
    }
    while (duplicateCol >= 0)
    {
        if (board[row][duplicateCol] == 'Q')
        {
            return false;
        }
        duplicateCol--;
    }
    return true;
}
void solve(int col, int n, vector<string> board, vector<vector<string>> &ans)
{
    if (col == n)
    {
        ans.push_back(board);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (isSafe(board, i, col, n))
        {
            board[i][col] = 'Q';
            solve(col + 1, n, board, ans);
            board[i][col] = '.';
        }
    }
}

vector<vector<string>> nQueen(int n)
{
    vector<vector<string>> ans;
    vector<string> board(n, string(n, '.'));
    solve(0, n, board, ans);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}