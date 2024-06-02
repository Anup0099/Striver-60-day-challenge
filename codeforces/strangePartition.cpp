#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int &it : arr)
        {
            cin >> it;
        }
        long long maxsum = 0;
        long long minsum = 0;
        for (int i = 0; i < n; i++)
        {
            long long temp = ceil((double)arr[i] / x);
            maxsum += temp;
        }
        long long acc = 0;
        for (long long i = 0; i < n; i++)
        {
            acc += (arr[i]) % mod;
        }
        minsum = ceil((double)acc / x);
        cout << minsum % mod << " " << maxsum % mod << endl;
    }
}