#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    string a = "", b = "";
    a.push_back('(');
    while (a.size() < 2 * n)
    {
        if (a.back() == ')')
        {
            a.push_back('(');
        }
        else
        {
            a.push_back(')');
        }
    }
    while (b.size() < n)
    {
        b.push_back('(');
    }
    while (b.size() < 2 * n)
    {
        b.push_back(')');
    }
    if (a.find(s) == string::npos)
    {
        cout << "YES\n"
            << a << "\n";
    }
    else if (b.find(s) == string::npos)
    {
        cout << "YES\n"
            << b << "\n";
    }
    else
    {
        cout << "NO\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}