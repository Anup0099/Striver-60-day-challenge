#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (k == 2 || k == 3 || k == 5)
        {
            int ans = 10;
            for (int i = 0; i < n; i++)
            {
                int temp = (arr[i] + k - 1) / k - arr[i];
                ans = min(ans, temp);
            }
            cout << ans << endl;
            continue;
        }
        int ans = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int temp = ((arr[i] + k - 1) / k) * k - arr[i];
            ans = min(ans, temp);
            count += (arr[i] % 2 == 0);
        }
        count = min(count, 2);
        ans = min(ans, 2 - count);
        cout << ans << endl;
    }
}
