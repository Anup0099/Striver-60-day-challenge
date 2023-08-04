#include <bits/stdc++.h>
using namespace std;
double possible(vector<int> &dist, int mid)
{
    double time = 0.0;
    int n = dist.size();
    for (int i = 0; i < n - 1; i++)
    {
        double t = (double)(dist[i] / (double)mid);
        time += ceil(t);
    }
    time += (double)dist[n - 1] / (double)mid;

    return time;
}
int minSpeedOnTime(vector<int> &dist, double hour)
{
    int l = 1, r = 1e7;
    int minspeed = -1;
    int result;
    while (l <= r)
    {
        int mid = (r + l) / 2;
        if (possible(dist, mid) <= hour)
        {
            minspeed = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return minspeed;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v = {1, 2, 3};
    double hour = 2.7;
    cout << minSpeedOnTime(v, hour);
}