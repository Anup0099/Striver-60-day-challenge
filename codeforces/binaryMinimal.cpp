#include <bits/stdc++.h>
using namespace std;
// Alice is given a binary string
// �
// S of length
// �
// N.
// She can perform the following operations on string
// �
// S:

// Select an index
// 1
// ≤
// �
// ≤
// ∣
// �
// ∣
// 1≤i≤∣S∣ and delete the character
// �
// �
// S
// i
// ​
//  .;
// Select an index
// 1
// ≤
// �
// ≤
// ∣
// �
// ∣
// 1≤i≤∣S∣ and flip the character
// �
// �
// S
// i
// ​
//  . Note that while flipping
// 1
// 1 becomes
// 0
// 0 and vice-versa.
// Find the lexicographically smallest string Alice can obtain using at most
// �
// K operations.

// Note that string
// �
// X is said to be lexicographically smaller than string
// �
// Y if:

// String
// �
// X is a prefix of string
// �
// Y, or;
// The smallest index
// �
// i where
// �
// X and
// �
// Y differ,
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
//  .
// Input Format
// The first line of input will contain a single integer
// �
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains two space-separated integers
// �
// N and
// �
// K — denoting length of the string and the maximum number of operations, respectively.
// The next line contains a binary string
// �
// S of length
// �
// N.
// Output Format
// For each test case, output on a new line, the lexicographically smallest string that Alice can make.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        for (int i = 0; i < n; i++)
        {
            if (k == 0)
                break;
            if (s[i] == '1' and k > 0)
            {
                s[i] = '0';
                k--;
            }
        }
        while (k > 0 and !s.empty())
        {
            s.pop_back();
            k--;
        }
        cout << s << endl;
    }
}