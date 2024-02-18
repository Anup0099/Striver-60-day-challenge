#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;

        if (r < 2 * l)
        {
            cout << r - l << endl;
        }
        else
        {
            int longestOddLessThanR;
            if (r % 2 == 0)
            {
                longestOddLessThanR = r - 1;
            }
            else
            {
                longestOddLessThanR = r;
            }
            cout << longestOddLessThanR / 2 << endl;
        }
    }
    return 0;
}
