#include <bits/stdc++.h>
using namespace std;
bool prefix(string s, string t)
{
    int n = s.length();
    int m = t.length();
    bool flag = true;
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        if (s[i] == t[i])
        {
            count++;
        }
        if (count == n)
        {
            flag = true;
            break;
        }
        else
        {
            flag = false;
        }
    }
    return flag;
}
bool suffix(string s, string t)

{
    // check if s is a suffix of t
    int n = s.length();
    int m = t.length();
    bool flag = true;
    int count = 0;
    while(n--)
    {
        if(s[n]==t[m-1])
        {
            count++;
            m--;
        }
        if(count==s.length())
        {
            flag = true;
            break;
        }
        else
        {
            flag = false;
        }
    }
    return flag;
    
}
int main()
{
    int n, m;
    cin >> n >> m;
    string s, t;

    cin >> s >> t;
    int ans = 0;
    if (prefix(s, t) and !suffix(s, t))
    {
        ans = 1;
    }
    else if (suffix(s, t) and !prefix(s, t))
    {
        ans = 2;
    }
    else if (prefix(s, t) && suffix(s, t))
    {
        ans = 0;
    }
    else if(s!=t)
    {
        ans = 3;
    }
    cout << ans;
}