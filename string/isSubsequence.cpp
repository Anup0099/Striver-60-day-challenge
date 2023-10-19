#include <bits/stdc++.h>
using namespace std;
bool isSubsequence(string s, string t)
{
    int n = s.length();
    int m = t.length();
    // int i = 0, j = 0;
    // while (i < n and j < m)
    // {
    //     if (s[i] == t[j])
    //     {
    //         i++;
    //     }
    //     j++;
    // }
    // if (i == n)
    // {
    //     return true;
    // }
    // return false;
    unordered_map<char, vector<int>> map;
    for (int i = 0; i < m; i++)
    {
        map[t[i]].push_back(i);
    }
    int prev = -1;
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (map.find(s[i]) == map.end())
        {
            return false;
        }
        else
        {
            vector<int> v = map[s[i]];
            int idx = upper_bound(v.begin(), v.end(), prev) - v.begin();
            if (idx == v.size())
            {
                return false;
            }
            prev = v[idx];
        }
    }
    return true;
}
int numMatchingSubseq(string s, vector<string> &words)
{
    int n = s.length();
    int m = words.size();
    int count = 0;
    unordered_map<char, vector<int>> map;
    int prev = -1;
    for (int i = 0; i < n; i++)
    {
        map[s[i]].push_back(i);
    }
    for (int i = 0; i < m; i++)
    {
        string word = words[i];
        if (isSubsequence(word, s))
        {
            count++;
        }
    }
    return count;
}
// find index of first occurance of the string
int firstOccurances(string haystack, string needle)
{
    int n = haystack.length();
    int m = needle.length();
    int found = haystack.find(needle);
    if (found != string::npos)
    {
        return found;
    }
    return -1;
}
int main()
{
    string s = "abcde";
    vector<string> words = {"a", "bb", "acd", "ace"};
    cout << numMatchingSubseq(s, words);
}