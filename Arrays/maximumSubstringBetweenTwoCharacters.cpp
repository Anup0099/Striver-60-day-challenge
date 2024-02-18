#include <bits/stdc++.h>
using namespace std;
int maximumLengthBetweeenTwoCharacters(string s)
{
    int max_length = -1;
    int n = s.size();
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (s[i] == s[j])
    //         {
    //             max_length = max(max_length, j - i - 1);
    //         }
    //     }
    // }
    // return max_length;

    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(s[i]) != mp.end())
        {
            max_length = max(max_length, i - mp[s[i]] - 1);
        }
        else
        {
            mp[s[i]] = i;
        }
    }
    return max_length;
}
int main()
{
    string s = "scayofdzca";
    cout << maximumLengthBetweeenTwoCharacters(s);
}