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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int maxi = a[n - 1] - a[0];
        for (int i = 0; i < n - 1; i++)
        {
            maxi = max(maxi, a[i + 1] - a[i]);
        }
        for (int i = 1; i < n; i++)
        {
            maxi = max(maxi, a[i + 1] - a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, a[i] - a[i + 1]);
        }
        cout << maxi << endl;
    }
}