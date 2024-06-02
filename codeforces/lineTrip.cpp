#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int gretestDiff = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int temp = abs(a[i] - a[i + 1]);
            gretestDiff = max(gretestDiff, temp);
        }
        gretestDiff = max(gretestDiff, abs(0 - a[0]));
        int lastDiff = abs(a[n - 1] - x) * 2;
        if (lastDiff < gretestDiff)
        {
            cout << gretestDiff << endl;
        }
        else
        {
            cout << gretestDiff + (abs(gretestDiff - lastDiff)) << endl;
        }
    }
}