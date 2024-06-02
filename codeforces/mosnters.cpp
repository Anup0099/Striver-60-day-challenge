/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int> a(n);
        vector<int> c(n);
        if (n == 1)
        {
            cout << 1 << endl;

            continue;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % k == 0)
            {
                c[i] = 0;
            }
            else
            {
                c[i] = -1;
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << c[i] << " ";
        // }
        // cout << endl;
        vector<int> b;

        for (int i = 0; i < n; i++)
        {
            if (c[i] == 0)
            {
                b.push_back(i + 1);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (c[i] == -1)
            {
                b.push_back(i + 1);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}