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
        vector<int> a(n * k);
        for (int i = 0; i < n * k; i++)
        {
            cin >> a[i];
        }
        long long sum = 0;
        long long count = 0;
        long long interval = (n + 1) / 2;
        if (n == 2)
        {
            for (int i = 0; i < n * k; i += 2)
            {
                sum += a[i];
            }
        }
        else
        {

            int left = n - interval;
            left++;
            int x = 1;
            for (int i = (n * k) - 1; i >= 0; i--)
            {
                if (x % left == 0)
                {
                    sum += a[i];
                    count++;
                }
                x++;
                if (count >= k)
                {
                    break;
                }
            }
        }
        cout << sum << endl;
    }
}