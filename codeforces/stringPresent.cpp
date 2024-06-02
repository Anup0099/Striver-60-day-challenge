#include <bits/stdc++.h>
using namespace std;
string f(string s, string t)
{
    int n = s.size();
    int m = t.size();
    string ans = "";
    // map<char, int> mp;
    // string ans = "";
    // for (int i = 0; i < m; i++)
    // {
    //     mp[t[i]]++;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (mp.find(s[i]) == mp.end())
    //     {
    //         ans += s[i];

    //     }
    // }
    // return ans;
    for (int i = 0; i < n; i++)
    {
        // bool flag = false;
        for (int j = 0; j < m; j++)
        {
            if (s[i] == t[j])
            {
                // flag = true;
                break;
            }
            if (j == m - 1)
            {
                ans += s[i];
            }
        }
    }
    return ans;
}

int main()
{
    string s = "tiger";
    string t = "er";
    cout << f(s, t);
}