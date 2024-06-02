#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        vector<int> v;
        for (int i = 1; i <= 2000; i++)
        {
            if (i % 3 != 0 and i % 10 != 3)
            {
                v.push_back(i);
            }
        }
        // for (auto it : v)
        // {
        //     cout << it << " ";
        // }
        // cout << endl;
        cout << v[k-1] << endl;
    }
}
