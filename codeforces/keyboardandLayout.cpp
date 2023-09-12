#include <bits/stdc++.h>
using namespace std;
// There are two popular keyboard layouts in Berland, they differ only in letters positions. All the other keys are the same. In Berland they use alphabet with 26 letters which coincides with English alphabet.

// You are given two strings consisting of 26 distinct letters each: all keys of the first and the second layouts in the same order.

// You are also given some text consisting of small and capital English letters and digits. It is known that it was typed in the first layout, but the writer intended to type it in the second layout. Print the text if the same keys were pressed in the second layout.

// Since all keys but letters are the same in both layouts, the capitalization of the letters should remain the same, as well as all other characters.
int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    string ans = "";
    map<char, char> mp;
    for (int i = 0; i < 26; i++)
    {
        mp[a[i]] = b[i];
    }
    for (int i = 0; i < c.length(); i++)
    {
        char ch = tolower(c[i]);
        if (mp.find(ch) != mp.end())
        {
            ans += mp[ch];
        }
        else if (isdigit(c[i]))
        {
            ans += c[i];
        }
    }
    for (int i = 0; i < c.length(); i++)
    {
        if (isupper(c[i]))
        {
            ans[i] = toupper(ans[i]);
        }
    }
    cout << ans;
}