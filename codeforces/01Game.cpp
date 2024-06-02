#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int count1 = 0, count0 = 0;
        int i = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count1++;
            }
            else
            {
                count0++;
            }
        }

        int k = min(count1, count0);
        if (k % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }
}