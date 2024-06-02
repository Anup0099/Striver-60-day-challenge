#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '@')
            {
                ans++;
            }
            if (s[i] == '*')
            {
                if (i == n - 1 || i != n - 1 and s[i + 1]=='*')
                    break;
                if (s[i + 1] != '*')
                    continue;
            }
        }
        cout << ans << endl;
    }
}