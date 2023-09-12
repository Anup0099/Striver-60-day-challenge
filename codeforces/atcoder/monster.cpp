#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, h, x;
    cin >> n >> h >> x;

    vector<long long> v;
    for (long long i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        v.push_back(a);
    }
    long long ans = 0;
    int e = 0;
    sort(v.begin(), v.end());
    long long sum = h;
    for (auto it : v)
    {
        e++;
        if (it >= x - h)
        {
            ans = e;
            break;
        }
    }
    cout << ans << endl;
}