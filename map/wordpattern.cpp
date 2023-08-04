
#include <bits/stdc++.h>
using namespace std;
bool wordPattern(string pattern, string s)
{
    int n = pattern.size();
    int m = s.size();
    set<char> s1;
    set<string> s2;
    for (int i = 0; i < n; i++)
    {

        s1.insert(pattern[i]);
    }
    string ns = "";
    for (int i = 0; i < m; i++)
    {

        if (s[i] == ' ')
        {
            cout << ns << endl;
            s2.insert(ns);
            ns = "";
        }
        else
        {
            ns += s[i];
        }
    }
    // for (auto it : s1)
    // {
    //     cout << it << endl;
    // }
    cout << s1.size() << s2.size();
    if (s1.size() == s2.size())
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, p;
    cin >> s >> p;
    cout << wordPattern(s, p);
}