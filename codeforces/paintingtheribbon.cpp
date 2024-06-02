#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int temp = (n+(m-1))/m;
        int rem = n - temp;
        if (m == 1)
        {
            cout << "NO" << endl;
        }
        else if (k >= rem)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}