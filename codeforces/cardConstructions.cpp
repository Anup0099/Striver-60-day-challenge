#include <bits/stdc++.h>
using namespace std;
// A card pyramid of height 1
//  is constructed by resting two cards against each other. For h>1
// , a card pyramid of height h
//  is constructed by placing a card pyramid of height h−1
//  onto a base. A base consists of h
//  pyramids of height 1
// , and h−1
//  cards on top. For example, card pyramids of heights 1
// , 2
// , and 3
//  look as follows:

// You start with n
//  cards and build the tallest pyramid that you can. If there are some cards remaining, you build the tallest pyramid possible with the remaining cards. You repeat this process until it is impossible to build another pyramid. In the end, how many pyramids will you have constructed?

// Input
// Each test consists of multiple test cases. The first line contains a single integer t
//  (1≤t≤1000
// ) — the number of test cases. Next t
//  lines contain descriptions of test cases.

// Each test case contains a single integer n
//  (1≤n≤109
// ) — the number of cards.

// It is guaranteed that the sum of n
//  over all test cases does not exceed 109
// .

// Output
// For each test case output a single integer — the number of pyramids you will have constructed in the end.

long long findCards(int n)
{
    return n * (n + 1) + n * (n - 1) / 2;
}
void solve()
{

    int n;
    cin >> n;

    int ans = 0;
    int k = 30000;

    while (k > 0)
    {
        long long req = findCards(k);
        if (n >= req)
        {
            ans++;
            n -= req;
        }
        else
        {
            k--;
        }
    }

    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}