#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Ania has a large integer S
// . Its decimal representation has length n
//  and doesn't contain any leading zeroes. Ania is allowed to change at most k
//  digits of S
// . She wants to do it in such a way that S
//  still won't contain any leading zeroes and it'll be minimal possible. What integer will Ania finish with?
int main()
{
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    if (n == 1 & k > 0)
        s[0] = '0';
    else if (s[0] != '1' & k > 0 & 1 != n)
    {
        s[0] = '1';
        k--;
    }
    for (int i = 1; i<n & k> 0; i++)
    {
        if (s[i] != '0')
        {
            s[i] = '0';
            k--;
        }
    }
    cout << s;
}