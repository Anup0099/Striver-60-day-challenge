#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int n;
        // cin >> n;
        string s;
        cin >> s;
        int n = s.length();
        int count1 = 0, count0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (count1 > 0)
                {

                    count1--;
                }
                else if (count1 == 0)
                {
                    break;
                }
            }
            else
            {
                if (count0 > 0)
                {
                    count0--;
                }
                else if (count0 == 0)
                {
                    break;
                }
            }
        }
        cout << count0 + count1 << endl;
    }
}