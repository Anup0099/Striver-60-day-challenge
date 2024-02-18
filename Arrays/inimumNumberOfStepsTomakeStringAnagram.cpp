#include <bits/stdc++.h>
using namespace std;
int minimumSteps(string s, string t)
{
    int n = s.length();
    int m = t.length();
    int ans = 0;
    // what does erase function do?
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        if (mp[t[i]] > 0)
        {
            mp[t[i]]--;
        }
        else
        {
            ans++;
        }
    }
    return ans;
}
bool closeStrings(string word1, string word2)
{
    // int n = word1.length();
    // int m = word2.length();
    // if (n != m)
    //     return false;
    // int a[26] = {0};
    // int b[26] = {0};
    // for (int i = 0; i < n; i++)
    // {
    //     a[word1[i] - 'a']++;
    //     b[word2[i] - 'a']++;
    // }
    // for (int i = 0; i < 26; i++)
    // {
    //     if ((a[i] == 0 && b[i] != 0) || (a[i] != 0 && b[i] == 0))
    //         return false;
    // }
    // sort(a, a + 26);
    // sort(b, b + 26);
    // for (int i = 0; i < 26; i++)
    // {
    //     if (a[i] != b[i])
    //         return false;
    // }
    // return true;
    int n = word1.length();
    int m = word2.length();
    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;

    for (int i = 0; i < n; i++)
    {
        mp1[word1[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        mp2[word2[i]]++;
    }

    for (auto it : mp1)
    {
        if (mp2.find(it.first) == mp2.end())
        {
            return false;
        }
        for (auto it : mp2)
        {
            if (mp1.find(it.second) == mp1.end())
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    string s = "leetcode";
    string t = "practice";
    cout << minimumSteps(s, t);
}