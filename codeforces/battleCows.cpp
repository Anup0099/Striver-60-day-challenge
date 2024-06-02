#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        k = k - 1;
        int ans = 0;
        swap(a[0], a[k]);
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        swap(a[0], a[k]);
        int index = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[k])
            {
                swap(a[i], a[k]);
                index = i;
            }
        }
        int count2 = 0;
        for (int i = index; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                count2++;
            }
        }
        ans = max(ans, count2);
        cout << ans << endl;
    }
}