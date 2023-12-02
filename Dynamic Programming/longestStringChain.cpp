#include <bits/stdc++.h>
using namespace std;
bool comp(string &a, string &b)
{
    return a.length() < b.length();
}
bool isPredecessor(string &a, string &b)
{
    int n = a.length(), m = b.length();
    if (n != m - 1)
    {
        return false;
    }
    int i = 0, j = 0;
    int count = 0;
    while (i < n and j < m)
    {
        if (a[i] == b[j])
        {
            i++;
            j++;
        }
        else
        {
            count++;
            j++;
        }
    }
    if (count > 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int solve(vector<string> &words, int curr, int prev, vector<vector<int>> &dp)
{
    if (curr == words.size())
    {
        return 0;
    }
    if (dp[curr][prev] != -1)
    {
        return dp[curr][prev];
    }
    int take = 0, not_take = 0;
    if (prev == -1 || isPredecessor(words[prev], words[curr]))
    {
        take = 1 + solve(words, curr + 1, curr, dp);
    }
    not_take = solve(words, curr + 1, prev, dp);
    dp[curr][prev] = max(take, not_take);
    return dp[curr][prev];
}
int longestStrChain(vector<string> &words)
{
    int n = words.size();
    sort(words.begin(), words.end(), comp);
    vector<vector<int>> dp(n, vector<int>(n+1, -1));
    return solve(words, 0, -1, dp);
}
int main()
{
    vector<string> words = {"a", "b", "ba", "bca", "bda", "bdca"};
    cout << longestStrChain(words);
}