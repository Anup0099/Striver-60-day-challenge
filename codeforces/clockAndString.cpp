/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        set<int> s;
        if (a > b)
        {
            swap(a, b);
        }

        for (int i = a+1; i <= b; i++)
        {
            s.insert(i);
        }

        set<int> s2;
        for (int i = 1; i <= 12; i++)
        {
            // we are checking here that if s1 does not contain that means s2 contains 
            if (s.find(i) == s.end() and i != a and i != b)
            {
                s2.insert(i);
            }
        }
        if (s.count(c) and s2.count(d) || s.count(d) and s2.count(c))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}