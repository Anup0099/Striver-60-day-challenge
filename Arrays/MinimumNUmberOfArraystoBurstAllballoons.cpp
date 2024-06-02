#include <bits/stdc++.h>
using namespace std;
int findMinArrowShots(vector<vector<int>> &points)
{
    int n = points.size();
    int m = points.size();
    sort(points.begin(), points.end());
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        int currstart = points[i][0];
        int currend = points[i][1];
        int prevstart = points[i - 1][0];
        int prevend = points[i - 1][1];
        if (currstart > prevend)
        {
            count++;
        }
        else
        {

            points[i][0] = max(currstart, prevstart);
            points[i][1] = min(currend, prevend);
        }
    }
    return count;
}
int main()
{
    vector<vector<int>> points = {{10, 16}, {2, 8}, {1, 6}, {7, 12}};
    cout << findMinArrowShots(points) << endl;
    return 0;
}