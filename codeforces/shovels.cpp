#include <bits/stdc++.h>
using namespace std;
// Polycarp plays a well-known computer game (we won't mention its name). In this game, he can craft tools of two types — shovels and swords. To craft a shovel, Polycarp spends two sticks and one diamond; to craft a sword, Polycarp spends two diamonds and one stick.

// Each tool can be sold for exactly one emerald. How many emeralds can Polycarp earn, if he has a
//  sticks and b
//  diamonds?

// Input
// The first line contains one integer t
//  (1≤t≤1000
// ) — the number of test cases.

// The only line of each test case contains two integers a
//  and b
//  (0≤a,b≤109
// ) — the number of sticks and the number of diamonds, respectively.

// Output
// For each test case print one integer — the maximum number of emeralds Polycarp can earn.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        cout << min(a, min(b, (a + b) / 3)) << endl;
    }
}