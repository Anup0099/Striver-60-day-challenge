#include <bits/stdc++.h>
using namespace std;
string baalncedString(int n)
{
    string ans = "";
    int a = n / 26, b = n % 26, i;
    string full = "";
    for (i = 0; i < 26; i++)
    {
        full += ('a' + i);
    }
    while (a--)
    {
        ans += full;
    }
    if (n % 2 == 0)
    {
        for (i = 0; i < b / 2; i++)
        {
            ans += ('a' + i);
        }
        for (i = 26 - b / 2; i < 26; i++)
        {
            ans += ('a' + i);
        }
    }
    else
    {
        int sod = 0, temp = n;
        while (temp)
        {
            sod += temp % 10;
            temp /= 10;
        }
        if (sod % 2 == 0)
        {
            for (i = 0; i < (b + 1) / 2; i++)
            {
                ans += ('a' + i);
            }
            for (i = 26 - b / 2; i < 26; i++)
            {
                ans += ('a' + i);
            }
        }
        else
        {
            for (i = 0; i < b / 2; i++)
            {
                ans += ('a' + i);
            }

            for (i = 26 - (b + 1) / 2; i < 26; i++)
            {
                ans += ('a' + i);
            }
        }
    }
    return ans;
}
int main() {
   int n=11;
    cout << baalncedString(n);
}