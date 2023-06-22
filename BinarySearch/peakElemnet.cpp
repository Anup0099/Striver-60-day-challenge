#include <bits/stdc++.h>
using namespace std;
int peakElement(vector<int> &v)
{
    int n = v.size();
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (v[mid - 1] <= v[mid] && v[mid + 1] <= v[mid])
        {
            return mid;
        }
        if (v[mid - 1] > v[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}