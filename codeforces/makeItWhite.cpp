#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        int end = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                ans = i + 1;
            }
        }
        for (int i = n; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                end = i + 1;
            }
        }
        cout << abs(ans - end) + 1 << endl;
    }
}
