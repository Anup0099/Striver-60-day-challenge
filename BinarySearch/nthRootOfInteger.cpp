#include <bits/stdc++.h>
using namespace std;
    double multiply(int number, int n)
    {
        double ans = 1.0;
        for (int i = 1; i <= n; i++)
        {
            ans *= number;
        }
        return ans;
    }
void getNthRoot(int n, int m)
{
    double low = 1, high = m;
    double eps = 1e-6;
    while ((high - low) > eps)
    {
        double mid = (low + high) / 2.0;
        if (multiply(mid, n) < m)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    cout << low << " " << high << endl;
    cout << pow(m, (double)(1.0 / (double)n));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    getNthRoot(3, 27);
}