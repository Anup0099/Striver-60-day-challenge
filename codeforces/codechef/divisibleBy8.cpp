#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// You are given a positive integer
// �
// N. Note that
// �
// N may exceed the range of a 64-bit integer.

// Find a positive integer
// �
// M (without leading zeroes) divisible by
// 8
// 8, formed by changing minimum number of digits in
// �
// N.
// Note that the number of digits in
// �
// M must be equal to the number of digits in
// �
// N.

// If there are multiple answers, you may print any one of them.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        n=s.size();
        if (n == 1)
            s = "00" + s;
        else if (n == 2)
            s = "0" + s;
        ll x = (s[n - 3] - '0') * 100 + (s[n - 2] - '0') * 10 + (s[n - 1]);
        if (x % 8 == 0)
        {
            reverse(s.begin(), s.end());
            while (s.length() > 1 and s.back() == '0')
            {
                s.pop_back();
            }
            reverse(s.begin(), s.end());
            cout << s << endl;
            continue;
        }
        x = (s[n - 3] - '0') * 100 + (s[n - 2] - '0')*10;
        for (int i = 0+(x=0); i <= 9; i++)
        {
            x += i;
            if (x % 8 == 0)
            {
                s[n - 1] = i + '0';
                reverse(s.begin(), s.end());

                while (s.back() == '0')
                {
                    s.pop_back();
                }
                reverse(s.begin(), s.end());
                cout << s << endl;
                break;
            }
            x -= i;
        }
        // cout << "-1" << endl;
    }
}