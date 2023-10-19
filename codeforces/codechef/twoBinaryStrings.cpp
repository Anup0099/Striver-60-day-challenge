#include <bits/stdc++.h>
using namespace std;
//  given two strings a and b of equal length consistng of only0 and 1 both string start with charcter 0 end with character 1. you can perform any operation any number of times. choose one of the strings and two equal characters in it then turn all the characters between them into those characters .formally choose one of these two strings then pick two intgers l and r such that 1<l<r<s and sl = sr then replace every charcter si such that l<i<r with sl.deltermine if its possible to make the given string equal by applying this operation any number of times on the given string.input :01010001 01110101 output :yes because we choose l=2 r=4 in string  a is
void solve(string s, string t)
{
    // what we have to find? we have to find if we can make the string equal by applying the operation any number of times what is theoperation?
    int n = s.length(), m = t.length();
    if (n != m)
        cout << "NO" << endl;

   
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0' and t[i] == '0' and s[i + 1] == '1' and t[i + 1] == '1')
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, t;
        cin >> s >> t;
        solve(s, t);
    }
}