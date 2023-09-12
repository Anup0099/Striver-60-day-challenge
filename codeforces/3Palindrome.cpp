#include <bits/stdc++.h>
using namespace std;
// In the beginning of the new year Keivan decided to reverse his name. He doesn't like palindromes, so he changed Naviek to Navick.

// He is too selfish, so for a given n he wants to obtain a string of n characters, each of which is either 'a', 'b' or 'c', with no palindromes of length 3 appearing in the string as a substring. For example, the strings "abc" and "abca" suit him, while the string "aba" doesn't. He also want the number of letters 'c' in his string to be as little as possible.

// Input
// The first line contains single integer n (1 ≤ n ≤ 2·105) — the length of the string.
int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n / 2; i++)
    {
        if (i % 2 == 0)
        {
            s += "aa";
        }
        else
        {
            s += "bb";
        }
    }
    if (n % 2 == 1)
    {
        if (n / 2 % 2 == 0)
        {
            s += "a";
        }
        else
        {
            s += "b";
        }
    }
    cout << s;
    
}