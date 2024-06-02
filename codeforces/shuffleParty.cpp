#include <bits/stdc++.h>
using namespace std;
// You are given an array a1,a2,…,an
// . Initially, ai=i
//  for each 1≤i≤n
// .

// The operation swap(k)
//  for an integer k≥2
//  is defined as follows:

// Let d
//  be the largest divisor†
//  of k
//  which is not equal to k
//  itself. Then swap the elements ad
//  and ak
// .
// Suppose you perform swap(i)
//  for each i=2,3,…,n
//  in this exact order. Find the position of 1
//  in the resulting array. In other words, find such j
//  that aj=1
//  after performing these operations.

// †
//  An integer x
//  is a divisor of y
//  if there exists an integer z
//  such that y=x⋅z
// .

// Input
// Each test contains multiple test cases. The first line contains the number of test cases t
//  (1≤t≤104
// ). The description of the test cases follows.

// The only line of each test case contains one integer n
//  (1≤n≤109
// ) — the length of the array a
// .

// Output
// For each test case, output the position of 1
//  in the resulting array.
int binaryEponentiation(int a, int b)
{
    int res = 1;
    if (b == 0)
        return 1;
    int ans = binaryEponentiation(a, b / 2);
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return ans * ans * a;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        // int msb = static_cast<int>(log2(n)) + 1;

        long long ans = pow(2, floor(log2(n)));
        cout << setprecision(100) << ans << endl;
    }
}