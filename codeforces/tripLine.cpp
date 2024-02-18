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

        long long ans = 0;
        long long ar = 0, p = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> ar;
            ans = max(ans, abs(ar - p));
            p = ar;
        }

        ans = max(ans, 2 * (x - p));
        cout << ans << endl;
    }
}