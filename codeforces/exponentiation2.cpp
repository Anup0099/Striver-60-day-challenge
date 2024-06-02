/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9;
long long exp(long long a, long long b, long long mod)
{
    if (b == 0)
    {
        return 1;
    }
    if (b % 2 == 0)
    {
        long long ans = exp(a, b / 2, mod);
        return (ans * ans) % mod;
    }
    else
    {
        return (a * exp(a, b - 1, mod)) % mod;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long ans = exp(b, c, mod - 1);
        long long p = exp(a, ans, mod);
        cout << p << endl;
    }
}