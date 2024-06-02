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
        int c, d;
        cin >> c >> d;
        vector<vector<int>> a(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<vector<int>> b(n, vector<int>(n, 0));
        b[0][0] = a[0][0];
        for (int i = 1; i < n; i++)
        {
            b[0][i] = b[i - 1][0] + c;
            b[i][0] = b[0][i - 1] + d;
        }

        // for column wise add d and for row wise add c
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                b[i][j] = min(b[i - 1][j] + c, b[i][j - 1] + d);
            }
        }
        // print the matrix b
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout << b[i][j] << " ";
        //     }
        // }
        set<long long> s1, s2;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                s1.insert(a[i][j]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                s2.insert(b[i][j]);
            }
        }
        bool flag = true;
        for (auto s : s2)
        {
            if (s1.find(s) == s1.end())
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}