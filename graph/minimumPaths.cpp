#include <bits/stdc++.h>
using namespace std;
// Given a maze with obstacles, count minimum number of jumps to reach end  of maze from starting position. From a cell you can jump to a number of steps equal to value at that cell in any of the four directions. 0 means cell is empty and 1 means cell has obstacle in it.
// Input Format
//((0,0)((1,0))
// Output Format
// 2
int solve(vector<vector<int>> &v, int i, int j, int n, int m, int xdir[], int ydir[], int maxJUmp)
{
    if (i == n - 1 && j == m - 1)
        return 0;
    int min = INT_MAX;
    for (int k = 0; k < 4; k++)
    {
        int x = i + xdir[k];
        int y = j + ydir[k];
        if (x >= 0 && y >= 0 && x < n && y < m && v[x][y] == 0)
        {
            int jumps = solve(v, x, y, n, m, xdir, ydir, maxJUmp);
            if (jumps != INT_MAX && jumps + 1 < min)
                min = jumps + 1;
        }
    }
    if (min <= maxJUmp)
    {
        return min;
    }
    return -1;
}
int get(vector<vector<int>> v, int maxJump)
{
    // directions
    int xdir[] = {0, 1, 0, -1};
    int ydir[] = {1, 0, -1, 0};
    int n = v.size();
    int m = v[0].size();
    return solve(v, 0, 0, n, m, xdir, ydir, maxJump);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> v(n, vector<int>(m, 0));
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x][y] = 1;
    }
    cout << get(v, k);
}