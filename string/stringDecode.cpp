#include <bits/stdc++.h>
using namespace std;
string DecondeAtIndex(string s, int k)
{
    string ans = "";
    int n = s.length();

    long long size = 0;
    for (auto ch : s)
    {
        if (isdigit(ch))
        {
            size *= (ch - '0');
        }
        else
        {
            size++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        k %= size;
        if (k == 0 and isalpha(s[i]))
        {
            return (string) "" + s[i];
        }
        if (isalpha(s[i]))
        {
            size--;
        }
        else
        {
            size /= (s[i] - '0');
        }
    }
    return "";
}
int main()
{
    string s = "leet2code3";
    int k = 10;
    cout << DecondeAtIndex(s, k);
}