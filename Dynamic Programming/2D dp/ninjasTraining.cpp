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
    return f(points, n - 1, 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<vector<int>> points(a, vector<int>(3, 0));
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> points[i][j];
            }
        }
        cout << ninjasTraining(a, points) << endl;
    }
}