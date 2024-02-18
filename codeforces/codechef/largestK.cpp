#include <bits/stdc++.h>
using namespace std;
// Largest K
// You are given integers
// �
// X and
// �
// Y
// (
// 2
// ≤
// �
// ,
// �
// ≤
// 1
// 0
// 9
// )
// (2≤X,Y≤10
// 9
//  ).

// Find the largest integer
// �
// K such that there exists a binary string
// �
// S, where:

// The count of
// 0
// 0s in
// �
// S is
// �
// X;
// The count of
// 1
// 1s in
// �
// S is
// �
// Y;
// There are atleast
// �
// K
// 1
// 1s between any two occurrences of
// 0
// �
// 0s in
// �
// S.
// Input Format
// The first line contains a single integer
// �
// T, denoting the number of test cases.
// The first line of each test case contains two integers
// �
// X and
// �
// Y
// −
// − the number of
// 0
// 0s and
// 1
// 1s in
// �
// S.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int k = 0;
        while (y >= k * (k + 1) / 2)
        {
            k++;
        }
        k--;
        cout << k << endl;
    }
}