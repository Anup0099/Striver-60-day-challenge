#include <bits/stdc++.h>
using namespace std;
// Problem
// Chef is interested by buying a new phone, and is in the process of researching what's available on the market.

// His favorite brand, Kitchen Telecom, just released their latest model.
// Kitchen Telecom releases a new phone every year, and so names its phones based upon the year of release: the name of the phone model launched in year
// �
// X is
// K
// K (the letter) followed by the last two digits of
// �
// X.
// For instance, the phone model launched in the year
// 2024
// 2024 is named
// K24
// K24.

// The current year is
// �
// X. What's the latest phone model launched by Kitchen Telecom?

// Input Format
// The first and only line of input contains a single integer
// �
// X, the current year.
// Output Format
// Print the name of Kitchen Telecom's phone launched in year
// �
// X.

// Constraints
// 1973
// ≤
// �
// ≤
// 2024
// 1973≤X≤2024
// Sample 1:
// Input
// Output
// 2000
// K00
// Sample 2:
// Input
// Output
// 2024
// K24
int main()
{
    int n;
    cin >> n;
    string s = "";
    int count = 0;
    while (n > 0 and count < 2)
    {
        int r = n % 10;
        s += to_string(r);
        n = n / 10;
        count++;
    }
    reverse(s.begin(), s.end());
    cout <<"k"<< s << endl;
}