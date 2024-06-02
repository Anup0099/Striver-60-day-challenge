/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        int ans = (p1 + p2 + p3) / 2;
        int win = p1 + p2;
        if ((p1 + p2 + p3) % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {

            cout << min(ans, win) << endl;
        }
    }
}