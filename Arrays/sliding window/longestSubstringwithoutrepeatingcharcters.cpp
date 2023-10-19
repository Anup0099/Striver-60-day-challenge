#include <bits/stdc++.h>
using namespace std;
int longestSubstringWithoutrepeatingCharacters(string s)
{
    int n = s.length();
    int ans = 0;
    unordered_set<char> st;
    int i = 0, j = 0;
    while (i < n and j < n)
    {
        if (st.find(s[j]) != st.end())
        {
            st.erase(s[i]);
            ++i;
        }
        else
        {
            st.insert(s[j]);
            ++j;
            ans = max(ans, j - i);
        }
    }
    return ans;
}

int lcs(vector<int> &v)
{
    int n = v.size();
    int i = 0, j = 0;
    unordered_map<char, int> mp;
    int len = 0;
    while (j < n)
    {
        if (mp.find(v[j]) != mp.end())
        {
            i = max(mp[v[j]], i);
        }
        mp[v[j]] = j + 1;
        len = max(len, j - i + 1);
        j++;
    }
    return len;
}
int longestUniqueCharacters(string s)
{
    int len = 0;
    int n = s.length();
    unordered_map<char, int> mp;
    int i = 0, j = 0;
    while (j < n)
    {
        mp[s[j]]++;
        while (mp[s[j]] > 1)
        {
            mp[s[i]]--;
            i++;
        }
        len= max(len,j-i+1);
        j++;
    }
    return len;
}
int main()
{
    string s = "abcabcbb";
    cout << longestSubstringWithoutrepeatingCharacters(s);
}