#include <bits/stdc++.h>
using namespace std;
int longestSubstring(string s)
{
    unordered_set<char> set;
    int n = s.size();
    int i = 0, j = 0, ans = 0;
    while (j < n)
    {
        while (set.find(s[j]) != set.end())
        {
            set.erase(s[i]);
            i++;
        }
        ans = max(ans, j - i + 1);
        set.insert(s[j]);
        j++;
    }
    return ans;
}
int solve(string s)
{
    int n = s.length();
    vector<int> has(256, -1);
    int i = 0, j = 0, ans = 0;
    int maxi = 0;
    while (j < n)
    {
        if (has[s[j]] != -1)
        {
            if (has[s[j]] >= i)
            {
                i = has[s[j]] + 1;
            }
        }
        int len = j - i + 1;
        maxi = max(maxi, len);
        has[s[j]] = j;
        j++;
    }
    return maxi;
}
int longe(string s)
{
    int n = s.length();
    int i = 0, j = 0, ans = 0;
    unordered_map<char, int> map;
    while (j < n)
    {
        if (map[s[j]] != -1)
            i = max(i, map[s[j]] + 1);
        map[s[j]] = j;
        ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s = "abcabcbb";
    cout << solve(s) << endl;
}