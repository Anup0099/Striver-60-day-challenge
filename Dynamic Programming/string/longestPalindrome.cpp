#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
bool checkPalindrome(string s)
{
    int i = 0, j = s.length() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void allSubstring(int ind, int n, string &s)
{
    if (ind == n)
    {
        return;
    }
    string temp = "";
    for (int i = ind; i < n; i++)
    {
        temp += s[i];
        ans.push_back(temp);
    }
    allSubstring(ind + 1, n, s);
}
string longestPalindrome(string s)
{
    int n = s.length();
    allSubstring(0, n - 1, s);
    string res = "";
    int maxLen = 0;
    for (string str : ans)
    {
        if (checkPalindrome(str))
        {
            if (str.length() > maxLen)
            {
                maxLen = str.length();
                res = str;
            }
        }
    }
    return res;
}
 int longestCommonSubsequence(string s1, string s2)
    {
        int n = s1.length(), m = s2.length();
        vector<vector < int>> dp(n+1, vector<int> (m+1, 0));
        for (int i = 1; i <=n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[n][m];
    }
string longestPalindrome(string s)
{
  

}
int main() {
    string s="babad";
    cout<<longestPalindrome(s);
}