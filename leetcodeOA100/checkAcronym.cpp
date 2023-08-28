#include <bits/stdc++.h>
using namespace std;
// Given an array of strings words and a string s, determine if s is an acronym of words.

// The string s is considered an acronym of words if it can be formed by concatenating the first character of each string in words in order. For example, "ab" can be formed from ["apple", "banana"], but it can't be formed from ["bear", "aardvark"].

// Return true if s is an acronym of words, and false otherwise.
bool isAcronym(vector<string> &words, string s)
{
    string ans = "";
    for (int i = 0; i < words.size(); i++)
    {
        ans += words[i][0];
    }
    return ans == s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}