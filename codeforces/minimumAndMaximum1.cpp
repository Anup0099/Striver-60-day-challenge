#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        // vector<int> a(n);
        // iota(a.begin(), a.end(), 1);
        // vector<int> b;
        // long long i = 0, j = n - 1;
        // while (i <= j)
        // {
        //     b.push_back(a[i]);
        //     b.push_back(a[j]);
        //     i++;
        //     j--;
        // }
        // for (auto it : b)
        // {
        //     cout << it << " ";
        // }
        // long long sum = 0;
        // for (long long i = 0; i < n - 1; i++)
        // {
        //     long long temp = min(b[i], b[i + 1]);
        //     sum += temp;
        // }
        // sum += min(b[0], b[n - 1]);
        // cout << sum << endl;
        int sum = (n / 2) * (n / 2 + 1);
        int num = n + 1 / 2;
        if (n % 2 == 1)
        {
            sum -= num;
        }
        cout << sum << endl;
    }
}