#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        if ((x - y) > 0)
        {
            cout << x << endl;
        }
        else
        {
            int diff = abs(x - y);
            if (k >diff)
            {
                cout << y << endl;
            }
            else
            {
                int temp = abs(diff - k);
                int ans = y + temp;
                cout << ans << endl;
            }
            // int temp = abs(diff - k);
            // int ans = y + temp;
            // cout << ans << endl;
        }
    }
}