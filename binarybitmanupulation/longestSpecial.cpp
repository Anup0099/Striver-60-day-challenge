#include <bits/stdc++.h>
using namespace std;
// You are given a string s that consists of lowercase English letters.

// A string is called special if it is made up of only a single character. For example, the string "abc" is not special, whereas the strings "ddd", "zz", and "f" are special.

// Return the length of the longest special substring of s which occurs at least thrice, or -1 if no special substring occurs at least thrice.

// A substring is a contiguous non-empty sequence of characters within a string.
int maximumString(string s)
{
    int n = s.size();
    int ans = -1;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string temp = "";
        temp += s[i];
        v.push_back(temp);
        for (int j = i + 1; j < n; j++)
        {
            temp += s[j];
            v.push_back(temp);
        }
    }
    for (auto it : v)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            string temp = "";
            temp += s[i];
            for (int j = i + 1; j < n; j++)
            {
                temp += s[j];
                if (temp == it)
                {
                    count++;
                    break;
                }
            }
        }
        if (count >= 3)
        {
            ans = max(ans, (int)it.size());
        }
    }
    return ans;

}
int main() {
    string s = "aaaa";
    cout << maximumString(s);
}