#include <bits/stdc++.h>
using namespace std;
// A positive integer is called k
// -beautiful, if the digit sum of the decimal representation of this number is divisible by k†
// . For example, 9272
//  is 5
// -beautiful, since the digit sum of 9272
//  is 9+2+7+2=20
// .

// You are given two integers x
//  and k
// . Please find the smallest integer y≥x
//  which is k
// -beautiful.

// †
//  An integer n
//  is divisible by k
//  if there exists an integer m
//  such that n=k⋅m
// .

// Input
// Each test contains multiple test cases. The first line contains the number of test cases t
//  (1≤t≤104
// ). The description of the test cases follows.

// The only line of each test case contains two integers x
//  and k
//  (1≤x≤109
// , 1≤k≤10
// ).

// Output
// For each test case, output the smallest integer y≥x
//  which is k
// -beautiful.
int sumOFDigits(int x)
{
    int ans = 0;
    while (x > 0)
    {
        ans += x % 10;
        x /= 10;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        int ans = 0;

        while (sumOFDigits(x) % k != 0)
        {
            x++;
        }
        cout << x << endl;
    }
}