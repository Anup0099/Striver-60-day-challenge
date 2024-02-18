#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> v(n), pre[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        
        for (int i = 1; i <=n; i++)
        {
            pre[i] = pre[i - 1] + v[i - 1];
        }
        int sum = 0, answer = INT_MIN;
        auto maxK= [&](int index) {
            return pre[min(n,index+x)] - pre[index];
        };
    }
}