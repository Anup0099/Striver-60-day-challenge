#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string pat = "hello";
    int n = s.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == pat[count])
        {
            count++;
        }
        if (count == 5)
        {
            break;
        }
    }
    if (count >= 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}