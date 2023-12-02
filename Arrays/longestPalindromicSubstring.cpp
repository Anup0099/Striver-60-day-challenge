#include <bits/stdc++.h>
using namespace std;
int longestPalindromicSubstring(string s)
{
    int n = s.length();
    int maxLen = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int len = j - i + 1;
            string sub = s.substr(i, len);
            string rev = sub;
            reverse(rev.begin(), rev.end());
            if (sub == rev)
            {
                maxLen = max(maxLen, len);
            }
        }
    }
    return maxLen;
}
    bool isPlaindrome(string s, int i, int j)
    {
        if (i >= j)
        {
            return true;
        }
        if (s[i] == s[j])
        {
            return isPlaindrome(s, i + 1, j - 1);
        }
        return false;
    }
string longestSubstring(string s)
{
    int n = s.length();
    string ans = "";

    int maxLen = 1;
    int sp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int len = j - i + 1;
            if (isPlaindrome(s, i, j) and len > maxLen)
            {
                maxLen = len;
                sp = i;
            }
        }
    }
    return s.substr(sp, maxLen);
}
int main()
{
    string s;
    cin >> s;
    cout << longestSubstring(s) << endl;
    return 0;
}