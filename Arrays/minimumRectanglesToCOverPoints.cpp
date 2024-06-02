#include <bits/stdc++.h>
using namespace std;
int minRectanglesToCoverPoints(vector<vector<int>> &points, int w)
{
    int n = points.size();
    int m = points[0].size();
    // based on first point
    sort(points.begin(), points.end(), [&](vector<int> &a, vector<int> &b)
         { return a[0] < b[0]; });
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int curr_point = points[i][0];
        int limit = curr_point + w;
        ans++;
        while (i < n and points[i][0] <= limit)
        {
            i++;
        }
    }
    return ans;
}
int main()
{
}