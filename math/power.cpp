#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
long long power(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long x = power(a, b / 2);
    long long ans = 1;
    if (b % 2)
    {
        ans = (x * x) % mod;
        ans = (ans * a) % mod;
    }
    else
    {
        ans = (x * x) % mod;
    }
    return ans;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        cout << power(a, b);
        cout << endl;
    }
}