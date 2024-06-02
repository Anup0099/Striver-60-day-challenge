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
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        int ans = 0;
        for (auto it : mp)
        {
            if (it.second >= 3)
            {
                ans += it.second / 3;
            }
        }
        cout << ans << endl;
    }
}