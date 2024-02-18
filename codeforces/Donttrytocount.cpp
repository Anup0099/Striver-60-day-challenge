#include <bits/stdc++.h>
using namespace std;
// Given a string x
//  of length n
//  and a string s
//  of length m
//  (n⋅m≤25
// ), consisting of lowercase Latin letters, you can apply any number of operations to the string x
// .

// In one operation, you append the current value of x
//  to the end of the string x
// . Note that the value of x
//  will change after this.

// For example, if x=
// "aba", then after applying operations, x
//  will change as follows: "aba" →
//  "abaaba" →
//  "abaabaabaaba".

// After what minimum number of operations s
//  will appear in x
//  as a substring? A substring of a string is defined as a contiguous segment of it.
// Input
// The first line of the input contains a single integer t
//  (1≤t≤104
// ) — the number of test cases.

// The first line of each test case contains two numbers n
//  and m
//  (1≤n⋅m≤25
// ) — the lengths of strings x
//  and s
// , respectively.

// The second line of each test case contains the string x
//  of length n
// .

// The third line of each test case contains the string s
//  of length m
// .

// Output
// For each test case, output a single number — the minimum number of operations after which s
//  will appear in x
//  as a substring. If this is not possible, output −1
// .
int solve(string s, string x, int n, int m)
{
    int ans = 0;
    int i = 0;
    // string a = x;
    while (i < 6)
    {
        if (x.find(s) != string::npos)
        {
            return ans;
        }
        else
        {
            x+=x;
            ans++;
            i++;
        }
    }
    return -1;
}

int main()
{ // avoid memoery limit exceeded
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m >> m;
        string x, s;
        cin >> x >> s;
        cout << solve(s, x, n, m) << endl;
    }
}