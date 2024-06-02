#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, g, b, w;
        cin >> r >> g >> b >> w;
        // we have to make palindrome of the string so we have to make sure that the number of odd characters is at most 1
        if (r % 2 + g % 2 + b % 2 + w % 2 <= 1)
        {
            cout << "Yes" << endl;
        }
        else if (r > 0 && g > 0 && b > 0)
        {
            r--, g--, b--, w += 3;
            if (r % 2 + g % 2 + b % 2 + w % 2 <= 1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }
}