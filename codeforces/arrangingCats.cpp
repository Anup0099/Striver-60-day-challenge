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
        string s;
        cin >> s;
        string f;
        cin >> f;
        int count1 = 0, count2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == f[i])
            {
                continue;
            }
            else
            {
                if (s[i] == '1')
                {
                    count1++;
                }
                else
                {
                    count2++;
                }
            }
        }
        cout<<max(count1,count2)<<endl;
    }
}
