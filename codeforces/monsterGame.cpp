#include <bits/stdc++.h>
using namespace std;
// You are playing a computer game. The current level of this game can be modeled as a straight line. Your character is in polong long  0
//  of this line. There are n
//  monsters trying to kill your character; the i
// -th monster has health equal to ai
//  and is initially in the polong long  xi
// .

// Every second, the following happens:

// first, you fire up to k
//  bullets at monsters. Each bullet targets exactly one monster and decreases its health by 1
// . For each bullet, you choose its target arbitrary (for example, you can fire all bullets at one monster, fire all bullets at different monsters, or choose any other combination). Any monster can be targeted by a bullet, regardless of its position and any other factors;
// then, all alive monsters with health 0
//  or less die;
// then, all alive monsters move 1
//  polong long  closer to you (monsters to the left of you increase their coordinates by 1
// , monsters to the right of you decrease their coordinates by 1
// ). If any monster reaches your character (moves to the polong long  0
// ), you lose.
// Can you survive and kill all n
//  monsters without letting any of them reach your character?

// Input
// The first line of the input contains one long long eger t
//  (1≤t≤3⋅104
// ) — the number of test cases.

// Each test case consists of three lines:

// the first line contains two long long egers n
//  and k
//  (1≤n≤3⋅105
// ; 1≤k≤2⋅109
// );
// the second line contains n
//  long long egers a1,a2,…,an
//  (1≤ai≤109
// );
// the third line contains n
//  long long egers x1,x2,…,xn
//  (−n≤x1<x2<x3<⋯<xn≤n
// ; xi≠0
// ).
// Additional constralong long  on the input: the sum of n
//  over all test cases does not exceed 3⋅105
// .

// Output
// For each test case, prlong long  YES if you can kill all n
//  monsters before they reach your character, or NO otherwise.

// You can output each letter of the answer in any case (upper or lower). For example, the strings yEs, yes, Yes, and YES will all be recognized as positive responses.
int  main()
{
    long long  t;
    cin >> t;
    while (t--)
    {
        long long  n, k;
        cin >> n >> k;
        vector<long long > a(n), x(n);
        for (long long  i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<long long > b(n+1);
        for (long long  i = 0; i < n; i++)
        {
            long long  x;
            cin >> x;
            b[abs(x)] += a[i];
        }
        long long  flag = 1;
        long long  rem = 0;
        for (long long  i = 1; i <= n; i++)
        {
            rem += k;
            if (rem < b[i])
            {
                flag = 0;
            }
            else
            {
                rem -= b[i];
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}