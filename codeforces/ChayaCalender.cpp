#include <bits/stdc++.h>
using namespace std;
// The Chaya tribe believes that there are n
//  signs of the apocalypse. Over time, it has been found out that the i
// -th sign occurs every ai
//  years (in years ai
// , 2⋅ai
// , 3⋅ai
// , …
// ).

// According to the legends, for the apocalypse to happen, the signs must occur sequentially. That is, first they wait for the first sign to occur, then strictly after it, the second sign will occur, and so on. That is, if the i
// -th sign occurred in the year x
// , the tribe starts waiting for the occurrence of the (i+1)
// -th sign, starting from the year x+1
// .

// In which year will the n
// -th sign occur and the apocalypse will happen?

// Input
// The first line of the input contains a single integer t
//  (1≤t≤1000
// ) — the number of test cases. Then follow the descriptions of the test cases.

// The first line of each test case contains a single integer n
//  (1≤n≤100
// ) — the number of signs.

// The second line of each test case contains n
//  integers a1,a2,a3,…,an
//  (1≤ai≤106
// ) — the periodicities of the signs.
// explain the above problem?
//  here we have to find the year in which the nth sign will occur and the apocalypse will happen. what is given is the periodicity of the signs. meaning the first sign will occur in a1 years, the second sign will occur in a2 years and so on.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        long long cur = 1;
        for (auto &x : a)
        {
            cin >> x;
            cur = cur / x + 1;
            cur *= x;
        }
        cout << cur << endl;
    }
}