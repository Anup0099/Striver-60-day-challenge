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
        string s = "";
        for (int i = 0; i < n; i++)
        {
            s += "A";
        }
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            string s = "";
            for (int i = 0; i < n; i++)
            {
                if (i % 4 < 2)
                {
                    s += "A";
                }
                else
                {
                    s += "B";
                }
            }
            cout << s << endl;
        }
    }
}