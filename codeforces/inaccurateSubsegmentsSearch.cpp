#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n);
        vector<int> b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        set<int> s;
        for (int i = 0; i < m; i++)
        {
            s.insert(b[i]);
        }
        int ans = 0;
        for (int i = 0; i < n - m + 1; i++)
        {
            int count = 0;
            set<int> s1;
            for (int j = 0; j < m; j++)
            {
                s1.insert(a[i + j]);
            }
            for (int j = 0; j < m; j++)
            {
                if (s1.find(b[j]) != s1.end())
                {
                    count++;
                }
            }
            if (count >= k)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}