#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> count0(k);
        vector<int> count1(k);

        for (int i = 1; i <= n; i++)
        {
            if (a[i - 1] == '0')
                count0[i % k]++;
            else
                count1[i % k]++;
        }
        int ans1 = 0;
        int ans0 = 0;
        for (int i = 0; i < k; i++)
        {
            ans0 += (count1[i] / 2) + 2 * (count1[i] % 2);
            ans1 += count0[i];

            if (count0[i] != 0 and count1[i] == 0)
            {
                ans1 = 1e9;
            }
        }
        cout << min(ans0, ans1) << endl;
    }
}