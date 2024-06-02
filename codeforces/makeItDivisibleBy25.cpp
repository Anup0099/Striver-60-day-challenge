
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define pi 3.141592653589793238
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Asquare cout.tie(NULL);
using namespace std;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a / gcd(a, b) * b); }
bool sorta(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
bool sortd(const pair<int, int> &a, const pair<int, int> &b) { return (a.second > b.second); }
void printarr(ll arr[], ll n)
{
    fl(i, n) cout << arr[i] << " ";
    cout << "\n";
}
string decToBinary(int n)
{
    string s = "";
    int i = 0;
    while (n > 0)
    {
        s = to_string(n % 2) + s;
        n = n / 2;
        i++;
    }
    return s;
}
ll binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;
    int base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}
bool isPerfectSquare(ll x)
{
    if (x >= 0)
    {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
ll moduloMultiplication(ll a, ll b, ll mod)
{
    ll res = 0;
    a %= mod;
    while (b)
    {
        if (b & 1)
            res = (res + a) % mod;
        b >>= 1;
    }
    return res;
}
ll powermod(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
// Code by Abhinav Awasthi
// Language C++
// Practice->Success
void asquare()
{
    string s;
    cin >> s;
    unordered_map<ll, ll> mpp;
    ll n = s.length();
    fl(i, n)
    {
        mpp[(ll)(s[i] - '0')]++;
    }
    ll ans = LONG_LONG_MAX;
    bool ok = false;
    if (mpp[0] > 1)
    {
        ll c = 0;
        ll in;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0' && c > 0)
            {
                in = i;
                ok = true;
                break;
                c++;
            }
            else if (s[i] == '0')
                c++;
        }
        if (ok)
        {
            in = n - in - 2;
            ans = min(ans, in);
        }
    }
    ok = false;
    if (mpp[0] > 0 && mpp[5] > 0)
    {
        ll c = 0;
        ll in;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '5' && c > 0)
            {
                in = i;
                ok = true;
                break;
                c++;
            }
            else if (s[i] == '0')
                c++;
        }
        if (ok)
        {
            in = n - in - 2;
            ans = min(ans, in);
        }
    }
    ok = false;
    if (mpp[7] > 0 && mpp[5] > 0)
    {
        ll c = 0;
        ll in;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '7' && c > 0)
            {
                in = i;
                ok = true;
                break;
                c++;
            }
            else if (s[i] == '5')
                c++;
        }
        if (ok)
        {
            in = n - in - 2;
            ans = min(ans, in);
        }
    }
    ok = false;
    if (mpp[2] > 0 && mpp[5] > 0)
    {
        ll c = 0;
        ll in;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '2' && c > 0)
            {
                in = i;
                ok = true;
                break;
                c++;
            }
            else if (s[i] == '5')
                c++;
        }
        if (ok)
        {
            in = n - in - 2;
            ans = min(ans, in);
        }
    }
    if (mpp[0] > 0)
    {
        ans = min(ans, n - mpp[0]);
    }
    cout << ans << "\n";
}
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        string s = to_string(n);
        int len = s.length();
        for (int i = 0; i < len; i++)
        {
            mp[s[i] - '0']++;
        }
        long long ans = INT_MAX;
        bool ok = false;

        if (mp[0] > 0)
        {
            long long c = 0;
            long long in;
            for (int i = len - 1; i >= 0; i--)
            {
                if (s[i] == '0' and c > 0)
                {
                    in = i;
                    ok = true;
                    break;
                }
                else if (s[i] == '0')
                {
                    c++;
                }
            }
            if (ok)
            {
                in = len - in - 2;
                ans = min(ans, in);
            }
            ok = false;
            if (mp[0] > 0 and mp[5] > 0)
            {
                long long c = 0;
                long long in;
                for (int i = len - 1; i >= 0; i--)
                {
                    if (s[i] == '5' and c > 0)
                    {
                        in = i;
                        ok = true;
                        break;
                    }
                    else if (s[i] == '0')
                    {
                        c++;
                    }
                }
                if (ok)
                {
                    in = len - in - 2;
                    ans = min(ans, in);
                }
            }
            ok = false;
            if (mp[0] > 0 and mp[0] > 0)
            {
                long long c = 0;
                long long in;
                for (int i = len - 1; i >= 0; i--)
                {
                    if (s[i] == '0' and c > 0)
                    {
                        in = i;
                        ok = true;
                        break;
                    }
                    else if (s[i] == '0')
                    {
                        c++;
                    }
                }
                if (ok)
                {
                    in = len - in - 2;
                    ans = min(ans, in);
                }
            }
            ok = false;
            if (mp[5] > 0 and mp[7] > 0)
            {
                long long c = 0;
                long long in;
                for (int i = len - 1; i >= 0; i--)
                {
                    if (s[i] == '7' and c > 0)
                    {
                        in = i;
                        ok = true;
                        break;
                    }
                    else if (s[i] == '5')
                    {
                        c++;
                    }
                }
                if (ok)
                {
                    in = len - in - 2;
                    ans = min(ans, in);
                }
            }
            ok = false;
            if (mp[2] > 0 and mp[5] > 0)
            {
                long long c = 0;
                long long in;
                for (int i = len - 1; i >= 0; i--)
                {
                    if (s[i] == '2' and c > 0)
                    {
                        in = i;
                        ok = true;
                        break;
                        c++;
                    }
                    else if (s[i] == '5')
                    {
                        c++;
                    }
                }
                if (ok)
                {
                    in = len - in - 2;
                    ans = min(ans, in);
                }
            }
            if (mp[0] > 0)
            {
                ans = min(ans, len - mp[0]);
            }
            cout << ans << "\n";
        }
    }
    // asquare();
    return 0;
}
