#include <bits/stdc++.h>
using namespace std;
bool isPal(string s, int l, int r)
{

    while (l < r)
    {
        if (s[l] != s[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}
int maxLengthPalindromeString(string s)
{
    int n = s.length();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (isPal(s, i, j))
            {
                ans = max(ans, j - i + 1);
            }
        }
    }
    return ans;
}
int longestCommonSubsequence(string s, string t, int i, int j)
{
    int n = s.length();
    int m = t.length();

    if (i == n || j == m)
    {
        return 0;
    }
    if (s[i] == t[j])
    {
        return 1 + longestCommonSubsequence(s, t, i + 1, j + 1);
    }
    else
    {
        return max(longestCommonSubsequence(s, t, i + 1, j), longestCommonSubsequence(s, t, i, j + 1));
    }


}
int longestCommonPalindrome(string s)
{
    int n = s.length();
    string t = s;
    reverse(t.begin(), t.end());
    return longestCommonSubsequence(s, t, 0, 0);
}
int main()
{
    string s;
    cin >> s;
    cout<<longestCommonPalindrome(s);
}