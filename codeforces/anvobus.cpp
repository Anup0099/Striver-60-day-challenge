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
        long long n;
        cin >> n;
        long long minimum = 0, maximum = 0;
        if (n % 4 == 0 and n % 6 == 0)
        {
            minimum = n / 6;
            maximum = n / 4;
        }
        else if (n % 4 == 0 and n % 6 != 0)
        {
            minimum = n / 4;
            maximum = n / 4;
        }
        else if (n % 4 != 0 and n % 6 == 0)
        {
            minimum = n / 6;
            maximum = n / 6;
        }
        if (minimum == 0 and maximum == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << minimum << " " << maximum << endl;
        }
    }
}