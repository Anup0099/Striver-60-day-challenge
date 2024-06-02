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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool ok = true;
        sort(begin(a), end(a));
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % a[0] != 0)
            {
                b.push_back(a[i]);
            }
        }
        if (b.size() == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            for (int i = 0; i < b.size(); i++)
            {
                if (b[i] % b[0] != 0)
                {
                    ok = false;
                    break;
                }
            }
            cout << (ok ? "YES" : "NO") << endl;
        }
    }
}