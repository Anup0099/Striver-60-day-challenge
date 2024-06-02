#include <bits/stdc++.h>
using namespace std;
// Congratulations, you have been accepted to the Master's Assistance Center! However, you were extremely bored in class and got tired of doing nothing, so you came up with a game for yourself.

// You are given a string s
//  and an even integer n
// . There are two types of operations that you can apply to it:

// Add the reversed string s
//  to the end of the string s
//  (for example, if s=
//  cpm, then after applying the operation s=
//  cpmmpc).
// Reverse the current string s
//  (for example, if s=
//  cpm, then after applying the operation s=
//  mpc).
// It is required to determine the lexicographically smallest†
//  string that can be obtained after applying exactly n
//  operations. Note that you can apply operations of different types in any order, but you must apply exactly n
//  operations in total.

// †
// A string a
//  is lexicographically smaller than a string b
//  if and only if one of the following holds:

// a
//  is a prefix of b
// , but a≠b
// ;
// in the first position where a
//  and b
//  differ, the string a
//  has a letter that appears earlier in the alphabet than the corresponding letter in b
// .
// Input
// Each test consists of multiple test cases. The first line contains a single integer t
//  (1≤t≤500
// ) — the number of test cases. The description of the test cases follows.

// The first line of each test case contains a single even integer n
//  (2≤n≤109
// ) — the number of operations applied to the string s
// .

// The second line of each test case contains a single string s
//  (1≤|s|≤100
// ), consisting of lowercase English letters, — the string to which the operations are applied.

// Output
// For each test case, output a single line — the lexicographically smallest string that can be obtained after applying exactly n
//  operations.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int len = s.length();
        string rev = s;
        reverse(rev.begin(), rev.end());
        if (s <= rev)
        {
            cout << s << endl;
        }
        else
        {
            string ans = "";
            ans += rev;
            ans += s;
            cout << ans << endl;
        }
    }
}