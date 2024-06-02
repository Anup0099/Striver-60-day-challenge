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
        int count = 2 * n;
        // increase all the ones present in the array
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                a[i] = a[i] + 1;
            
            }
        }
        for (int i = 0; i < n - 1 and count > 0; i++)
        {
            if (a[i + 1] % a[i] == 0)
            {
                a[i + 1] = a[i + 1] + 1;
                count--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}