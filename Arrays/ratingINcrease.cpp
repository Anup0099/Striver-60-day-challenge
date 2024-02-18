#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string l = to_string(n);
        string s = "";
        //    remove the leading zero
        int ind;
        for (int i = 0; i < l.length(); i++)
        {
            if (l[i] == '0')
            {
                continue;
            }
            else
            {
                ind = i;
                break;
            }
        }
        for (int i = ind; i < l.length(); i++)
        {
            s += l[i];
        }
        string a = "";
        string b = "";
        a += s[0];
        int index;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                a += '0';
            }
            else
            {
                index = i;
                break;
            }
        }
        for (int i = index; i < s.length(); i++)
        {
            b += s[i];
        }
        // cout << a << " " << b << endl;
        if (stoi(a) < stoi(b))
        {
            cout << stoi(a) << " " << stoi(b) << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}