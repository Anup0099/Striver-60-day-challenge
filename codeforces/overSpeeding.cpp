#include <bits/stdc++.h>
using namespace std;
// You are given a binary string
// �
// S of length
// �
// N, representing the attendance sheet of Alice.
// For the days when Alice went to school,
// �
// �
// =
// 1
// S
// i
// ​
//  =1, otherwise,
// �
// �
// =
// 0
// S
// i
// ​
//  =0.

// Alice wanted to increase her attendance. She can perform the following operation at most once :

// Choose any substring of
// �
// S where Alice was absent everyday. She can then give a medical certificate for this period and will be marked present for the whole period .
// Note that a substring is a contiguous subsegment of a string. For example, acab is a substring of abacaba, but aa or d aren't substrings of this string. In other words, substring
// �
// [
// �
// ,
// �
// ]
// =
// �
// �
// �
// �
// +
// 1
// .
// .
// .
// �
// �
// S[l,r]=S
// l
// ​
//  S
// l+1
// ​
//  ...S
// r
// ​
//  .

// You need to find the maximum number of days Alice will be marked present after performing the operation at most once .

// Input Format
// The first line of input will contain a single integer
// �
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains an integer
// �
// N — the length of the string .
// The second line of each test case contains a binary string
// �
// S.
// Output Format
// For each test case, output on a new line the maximum number of days Alice will be marked present after at most one operation.
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
        int count = 0;
        int i = 0;
        while (i < n)
        {
            if (s[i] == '0')
            {
                int j = i;
                while (j < n && s[j] == '0')
                {
                    j++;
                }
                count = max(count, j - i);
                i = j;
            }
            else
            {
                i++;
            }
        }
        int count2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count2++;
            }
        }
        cout << count + count2 << endl;
    }
}