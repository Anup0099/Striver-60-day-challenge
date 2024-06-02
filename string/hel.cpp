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
        string s;
        cin >> s;
        string t;
        cin >> t;
        int n = s.size();
        int m = t.size();
        map<char, int> mp;
        for (auto it : t)
        {
            mp[it]++;
        }
        string ans = "";
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (mp.find(s[i]) != mp.end())
            {
                ans += s[i];
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                {
                    mp.erase(s[i]);
                }
            }
        }
        reverse(ans.begin(), ans.end());
        if (ans == t)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}