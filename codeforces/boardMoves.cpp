#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = 0;
        for (long long i = 1; i <= n / 2; ++i)
        {
            ans += (2 * i + 1) * i;
            ans += (2 * i + 1) * i;
            ans += (2 * i + 1 - 2) * i;
            ans += (2 * i + 1 - 2) * i;
        }
        cout << ans << endl;
    }
}