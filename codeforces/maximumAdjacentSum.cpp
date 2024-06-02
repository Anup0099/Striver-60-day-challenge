#include <bits/stdc++.h>
using namespace std;
// Maximise Adjacent Sum
// You are given an array
// �
// A of size
// �
// N
// (
// �
// ≥
// 2
// )
// (N≥2).

// We define
// �
// (
// �
// )
// =
// ∑
// �
// =
// 1
// �
// −
// 1
// (
// �
// �
// +
// �
// �
// +
// 1
// )
// f(A)=∑
// i=1
// N−1
// ​
//  (A
// i
// ​
//  +A
// i+1
// ​
//  ).

// Find the maximum value of
// �
// (
// �
// )
// f(A) you can obtain by rearranging the elements of
// �
// A in any arbitrary order.

// Input Format
// The first line of input will contain a single integer
// �
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains one integer,
// �
// N, the size of the array.
// The next line contains
// �
// N space-separated integers,
// �
// 1
// ,
// �
// 2
// ,
// …
// ,
// �
// �
// A
// 1
// ​
//  ,A
// 2
// ​
//  ,…,A
// N
// ​
//  .
// Output Format
// For each test case, output on a new line, the maximum value of
// �
// (
// �
// )
// f(A) you can obtain by rearranging the elements of
// �
// A in any arbitrary order.

// Constraints
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
        }
        sort(begin(arr), end(arr));
        int tot = accumulate(begin(arr), end(arr), 0);
        cout << tot * 2 - arr[0] - arr[1] << endl;
    }
}