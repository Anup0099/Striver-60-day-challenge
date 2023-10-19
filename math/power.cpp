#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    long long ans = 1;
    int ans1 = pow(a, b);
    int ans2 = pow(b, a);
    cout << ans1 + ans2 << endl;
}