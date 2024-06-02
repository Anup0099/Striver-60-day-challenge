#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long a, b, c;
    cin >> a >> b >> c;
    long long tents = a;
    tents += b / 3;
    b %= 3;
    if (b > 0 and 3 - b > c)
    {
        cout << -1 << endl;
        return;
    }
    if (b > 0)
    {
        tents++;
        c -= 3 - b;
    }
    b = 0;
    tents += (c + 2) / 3;
    cout << tents << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
