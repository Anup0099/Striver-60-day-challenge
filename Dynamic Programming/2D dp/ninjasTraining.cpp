#include <bits/stdc++.h>
using namespace std;
int f(vector<vector<int>> &points, int days, int last)
{
    if (days == 0)
    {
        int maxi = 0;
        for (int task = 0; task < 3; task++)
        {
            maxi = max(maxi, points[days][task]);
        }
        return maxi;
    }
    int maxi = 0;
    for (int task = 0; task < 2; task++)
    {
        if (task != last)
        {
            int points = points[days][task] + f(points, days - 1, task);
            maxi = max(maxi, points);
        }
    }
    return maxi;
}
int ninjasTraining(int n, vector<vector<int>> &points)
{
    int n = points.size();
    int m = points[0].size();
    int ind = 0;
    int days = 0;
    // return f(points, n - 1, 3);
    // tabulation method


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}