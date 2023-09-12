#include <bits/stdc++.h>
using namespace std;
// You are given two strings s1 and s2, both of length 4, consisting of lowercase English letters.

// You can apply the following operation on any of the two strings any number of times:

// Choose any two indices i and j such that j - i = 2, then swap the two characters at those indices in the string.
// Return true if you can make the strings s1 and s2 equal, and false otherwise.
bool canBeEqual(string s1, string s2)
{

    int n = s1.length();
    int m = s2.length();
    bool oddcheck = false, evencheck = false;
    for (int i = 0; i < n; i++)
    {
        if (s1[0] == s2[0] && s2[2] == s1[2] || s1[2] == s2[0] && s1[0] == s2[2])
        {
            evencheck = true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s1[1] == s2[1] && s2[3] == s1[3] || s1[3] == s2[1] && s1[1] == s2[3])
        {
            oddcheck = true;
        }
    }
    return oddcheck && evencheck;
}
bool canEqual(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    int j = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (i + 2 > s1.size() - 1)
        {
            j = i + 2 - s1.size();
        }
        else
        {
            j = i + 2;
        }
        swap(s1[i], s1[j]);
        if (s1 == s2)
            return true;
    }
    return false;
}
int main()
{
    string s1 = "kina", s2 = "kina";
    cout << canBeEqual(s1, s2);
}