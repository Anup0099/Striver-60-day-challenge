#include <bits/stdc++.h>
using namespace std;
// brute force
int maxPoints(vector<vector<int>> &points)
{
    int n = points.size();
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i + 1; j < n; j++)
        {
            count = 2;
            int dx = points[j][0] - points[i][0];
            int dy = points[j][1] - points[i][1];
            int slope = dy / dx;
            for (int k = 0; k < n; k++)
            {
                if (k != i and k != j)
                {
                    d_x = points[k][0] - points[i][0];
                    d_y = points[k][1] - points[i][1];
                    if (dx * d_y == dy * d_x)
                    {
                        count++;
                    }
                }
            }
        }
        result = max(result, count);
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}