#include <bits/stdc++.h>
using namespace std;
// Given a 2D binary matrix A(0-based index) of dimensions NxM. Find the minimum number of steps required to reach from (0,0) to (X, Y).
// Note: You can only move left, right, up and down, and only through cells that contain 1.
int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y)
{
    // code here
    int n = A.size();
    int m = A[0].size();
    vector<vector<int>> vis(n, vector<int>(m, 0));

    int delrow[] = {-1, 0, 1, 0};
    int delcol[] = {0, 1, 0, -1};

    int countSteps = 0;
    queue<pair<int, int>> q;
    q.push({0, 0});
    vis[0][0] = 1;
    while (!q.empty())
    {
        int size = q.size();
        while (size--)
        {
            pair<int, int> temp = q.front();
            q.pop();
            int i = temp.first;
            int j = temp.second;
            if (i == X && j == Y)
            {
                return countSteps;
            }
            for (int k = 0; k < 4; k++)
            {
                int x = i + delrow[k];
                int y = j + delcol[k];
                if (x < n && x >= 0 && y < m && y >= 0 && A[x][y] == 1 && vis[x][y] == 0)
                {
                    vis[x][y] = 1;
                    q.push({x, y});
                }
            }
        }
        countSteps++;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}