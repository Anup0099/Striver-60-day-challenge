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
        vector<vector<char>> a((2 * n), vector<char>(2 * n));
        for (int i = 0; i < 2 * n; i++)
        {
            for (int j = 0; j < 2 * n; j++)
            {
                if ((i / 2 + j / 2) % 2 == 0)
                {
                    a[i][j] = '#';
                }
                else
                {
                    a[i][j] = '.';
                }
            }
        }
        for (int i = 0; i < 2 * n; i++)
        {
            for (int j = 0; j < 2 * n; j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
    }
}
// ##
// ##
// ##..
// ##..
// ..##
// ..##
// ##..##
// ##..##
// ..##..
// ..##..
// ##..##
// ##..##
// ##..##..
// ##..##..
// ..##..##
// ..##..##
// ##..##..
// ##..##..
// ..##..##
// ..##..##
