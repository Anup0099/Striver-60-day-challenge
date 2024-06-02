#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        if (n <= 10)
        {
            cout << n << endl;
        }
        else
        {

            int temp = floor(n / 10);
            ans += temp;
            cout << ans + 9 << endl;
            
        }
    }
}