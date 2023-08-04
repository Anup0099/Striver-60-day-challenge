#include <bits/stdc++.h>
using namespace std;
// brute force approach
// check karo ki left me travel karo and right me travel karo and check karo ki kya tumhara element peak element hai
// time complexity:
int peakElement(vector<int> &v)
{
    int n = v.size();
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (v[mid + 1] > v[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    return l;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}