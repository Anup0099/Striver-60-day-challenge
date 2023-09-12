#include <bits/stdc++.h>
using namespace std;
// Write a function to find the longest common prefix string amongst an array of strings.

//     If there is no common prefix,
//     return an empty string "".

string longestCommonPrefix(vector<string> &s)
{
    int n = s.size();
    string ans = "";
    for (int i = 0; i < s[0].length(); i++)
    {
        char ch = s[0][i];
        bool match = true;
        for (int j = 1; j < n; j++)
        {
            if (s[j][i] != ch || s[j].length() < i)
            {
                match = false;
                break;
            }
        }
        if (match)
        {
            ans += ch;
        }
        else
        {
            break;
        }
    }
    return ans;
}
int main() {}