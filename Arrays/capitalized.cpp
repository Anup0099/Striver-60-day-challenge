#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // if first element is not capital then return false
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        cout << "No";
        return 0;
    }
    // if any element is capital then return false
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] >= 'A' and s[i] <= 'Z')
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}