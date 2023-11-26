#include <bits/stdc++.h>
using namespace std;
bool backspace(string s, string t)
{
    int n = s.length();
    int m = t.length();

    string s1 = "", s2 = "";
    for (int i = 0; i < n; i++)
    {
        s1 += s[i];
        if (s[i] == '#')
        {
            s1.pop_back();
            if (s1.length() == 0)
            {
                continue;
            }
            s1.pop_back();
        }
    }
    for (int i = 0; i < m; i++)
    {
        s2 += t[i];
        if (t[i] == '#')
        {
            s2.pop_back();
            if (s2.length() == 0)
            {
                continue;// this is done to avoid the case when the string is empty and we are trying to pop_back from the empty string
            }
            s2.pop_back();
        }
    }
    cout << s1 << " " << s2 << endl;
    if (s1 == s2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s = "a##c";
    string t = "#a#c";
    cout << backspace(s, t);
}