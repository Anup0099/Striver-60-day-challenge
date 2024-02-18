#include <bits/stdc++.h>
using namespace std;

int n, t;
main()
{
    cin >> n >> t;
    if (n < 2 & t > 9)
        return cout << -1, 0;
    for (cout << (t > 9 ? 1 : t); --n;)
        cout << 0;
}