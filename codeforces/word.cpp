#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    int n = s.length();
    int lower = 0, upper = 0;
    for (int i = 0; i < n; i++)
    {
        if (isupper(s[i]))
            upper++;
        else
            lower++;
    }
    string ans = "";
    if (lower > upper)
    {

        for (int i = 0; i < n; i++)
        {
            ans += tolower(s[i]);
        }
    }
    else if (upper > lower)
    {
        for (int i = 0; i < n; i++)
        {
            ans += toupper(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            ans += tolower(s[i]);
        }
    }
    cout << ans << endl;
}