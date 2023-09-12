#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, k;
    cin >> n >> q >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> temp(n, 0);
    temp[0] = min(k, arr[1] - 1) - 1;
    for (int i = 1; i < n; i++)
    {
        temp[i] = arr[i + 1] - arr[i - 1] - 1;
        temp[i] -= 1;
    }
    temp[n - 1] = k - arr[n - 2] - 1;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == r)
        {
            cout << k - 1 << endl;
            continue;
        }
        else
        {
            int ans = 0;
            ans += arr[l + 1] - 2;
            ans += k - arr[r - 1] - 1;
            l++;
            r--;
            if (l <= r)
            {
                ans += temp[r] - temp[l];
            }
            cout << ans << endl;
        }
    }
}