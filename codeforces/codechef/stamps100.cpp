#include <bits/stdc++.h>
using namespace std;
// You are given a binary string
// �
// S of length
// �
// N.

// You can apply the following operation any (possibly zero) number of times:

// Select an integer
// �

// (
// 1
// ≤
// �
// ≤
// �
// −
// 2
// )
// i (1≤i≤N−2) and replace the substring
// �
// �
// �
// �
// +
// 1
// �
// �
// +
// 2
// S
// i
// ​
//  S
// i+1
// ​
//  S
// i+2
// ​
//   with 100.
// Find the lexicographically smallest string after the operations.

// Note: String
// �
// X is lexicographically smaller than string
// �
// Y if
// �
// �
// <
// �
// �
// X
// i
// ​
//  <Y
// i
// ​
//  , where
// �
// i is the first index where
// �
// X and
// �
// Y differ.
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
        string ans = "";

        int first=n;
        for(int i=0;i<n-2;i++)
        {
            if(s[i]=='1')
            {
                first=i;
                break;
            }
        }
        for(int i=first+1;i<n;i++)
        {
            s[i]='0';
        }
        cout<<s<<endl;
       
    }
}