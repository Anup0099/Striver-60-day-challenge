#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        if (s[0] == s[n - 1])
        {
            cout << s << endl;
        }
        else
        {
            if (s[0] == 'a' and s[n - 1] == 'b')
            {
                s[n - 1] = 'a';
            }
            else
            {
                s[n - 1] = 'b';
            }
            cout << s << endl;
        }
    }
}