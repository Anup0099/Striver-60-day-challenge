#include <bits/stdc++.h>
using namespace std;
// Anna and Katie ended up in a secret laboratory.

// There are a+b+c
//  buttons in the laboratory. It turned out that a
//  buttons can only be pressed by Anna, b
//  buttons can only be pressed by Katie, and c
//  buttons can be pressed by either of them. Anna and Katie decided to play a game, taking turns pressing these buttons. Anna makes the first turn. Each button can be pressed at most once, so at some point, one of the girls will not be able to make her turn.

// The girl who cannot press a button loses. Determine who will win if both girls play optimally.

// Input
// The first line contains a single integer t
//  (1≤t≤104
// ) — the number of test cases.

// Each test case consists of three integers a
// , b
// , and c
//  (1≤a,b,c≤109
// ) — the number of buttons that can only be pressed by Anna, the number of buttons that can only be pressed by Katie, and the number of buttons that can be pressed by either of them, respectively.

// Output
// For each test case, output First if Anna wins, or Second if Katie wins.
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == b)
        {
            if (c % 2 == 0)
            {
                cout << "Second\n";
            }
            else
            {
                cout << "First\n";
            }
        }
        else if (b > a)
        {
            cout << "Second\n";
        }
        else
        {
            cout << "Fitst\n";
        }
    }
}