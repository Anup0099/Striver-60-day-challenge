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
        if (n % 2 != 0)
        {
            int one = (n - 1) / 2;
            cout << 1 << " " << one << " " << one << endl;//
        }
        else
        {
            int one = n / 2;
            if (one % 2 == 0)
            {
                cout << one << " " << one / 2 << " " << one / 2 << endl;
            }
            else
            {
                cout << 2 << " " << (one - 1) << " " << (one - 1) << endl;
            }
        }
    }
}