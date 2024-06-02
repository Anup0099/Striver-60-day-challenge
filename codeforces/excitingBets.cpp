#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            long long diff = abs(a - b);
            long long ans1 = diff;
            long long ans2 = min(a % diff, diff - a % diff);
            cout << diff << " " << ans2 << endl;
        }
    }
}