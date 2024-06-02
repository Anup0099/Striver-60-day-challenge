/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
int findPermutationDifference(string s, string t)
{
    int n = s.length();
    int m = t.length();
    if (n != m)
    {
        return -1;
    }
    map<char, int> mp, mp2;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]] = i;
    }
    for (int i = 0; i < m; i++)
    {
        mp2[t[i]] = i;
    }
    int ans = 0;
    // for (auto it : mp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    // for (auto it : mp2)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    for (auto it : mp)
    {
        for (auto it2 : mp2)
        {
            if (it.first == it2.first)
            {
                ans += abs(it.second - it2.second);
            }
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, t;
    s = "abc";
    t = "bac";
    cout << findPermutationDifference(s, t) << endl;
}