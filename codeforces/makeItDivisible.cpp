#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int mod = 1e9 + 7;
long long binaryExponentiation(long long a, long long n)
{
    long long result = 1;
    while (n > 0)
    {
        // If n is odd, multiply result with a
        if (n % 2 == 1)
            result *= a;

        // Square 'a' and divide 'n' by 2
        a *= a;
        n /= 2;
    }
    return result;
}

ll solve(int n)
{
    ll p1 = binaryExponentiation(10, n);
    ll p2 = binaryExponentiation(10, n - 1);
    ll ans = 0;
    cout << p1 << " " << p2 << endl;
    for (ll i = p2; i < p1; i++)
    {
        if (i % 3 == 0 and i % 9 != 0 and i % 2 != 0)
        {
            ans = i;
            break;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
}