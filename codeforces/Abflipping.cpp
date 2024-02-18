#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        string s;
        cin >> s;
        int n = s.length();
        int ans = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                ans--;
            }
            else
            {
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'A')
            {
                ans--;
            }
            else
            {
                break;
            }
        }
        if (ans > 0)
            cout << ans << endl;
        else
            cout << 0 << "\n";
    }
}