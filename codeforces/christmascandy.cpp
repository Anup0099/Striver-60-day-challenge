#include <bits/stdc++.h>
using namespace std;
// There are
// �
// N friends numbered
// 1
// 1 to
// �
// N, seated in a straight line where the
// �
// �
// ℎ
// i
// th
//   seat is taken by friend numbered
// �
// �
// A
// i
// ​
//  .

// This Christmas, the friends have decided to distribute candies amongst each other.
// For each
// 1
// ≤
// �
// <
// �
// 1≤i<N, the friend at the
// �
// �
// ℎ
// i
// th
//   seat will gift one candy to the friend at the
// �
// �
// ℎ
// j
// th
//   seat if:

// �
// >
// �
// j>i ;
// �
// �
// <
// �
// �
// A
// j
// ​
//  <A
// i
// ​

// Find the number of people who receive at least one candy.

// Input Format
// The first line of input will contain a single integer
// �
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains an integer
// �
// N — the number of friends.
// The next line contains
// �
// N space-separated integers denoting the array
// �
// A.
// Output Format
// For each test case, output on a new line, the number of people who receive at least one candy.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = a[0];
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            if (ans > a[i])
            {
                count++;
            }
            else
            {
                ans = a[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}