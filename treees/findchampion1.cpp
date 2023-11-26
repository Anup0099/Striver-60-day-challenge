#include <bits/stdc++.h>
using namespace std;
int ones(vector<vector<int>> &grid, int row)
{
    int cnt = 0;
    for (int i = 0; i < grid[row].size(); i++)
    {
        if (grid[row][i] == 1)
        {
            cnt++;
        }
    }
    return cnt;
}
int findChampion(vector<vector<int>> &grid)
{
    int ans = 0;
    int n = grid.size();
    int m = grid[0].size();
    // we have to traverse in every row and check which row has maximum number of ones and print that row number
    int row = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = ones(grid, i);
        if (cnt > ans)
        {
            ans = cnt;
            row = i;
        }
    }
    return row;
}
int main() {
    vector<vector<int>>grid{{0,0,1},{1,0,1},{0,0,0}};
    cout<<findChampion(grid);
}