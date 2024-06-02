#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    string ans = "";
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '.')
        {
            break;
        }
        ans += s[i];
    }
    reverse(begin(ans),end(ans));
    cout << ans;
}