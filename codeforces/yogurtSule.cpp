#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, a, b;
        cin >> n >> a >> b;
        long long total = 0;
        if (2 * a <= b)
        {
            total = n * a;
        }
        else
        {
            total = (n / 2) * b;
            if (n % 2 != 0)
            {
                total += a;
            }
        }
        cout << total << endl;
    }
}