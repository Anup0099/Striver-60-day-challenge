#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> map;
        for (auto it : s)
        {
            map[it]++;
        }
        int OddOccurance = 0;
        for (auto it : map)
        {
            if (it.second % 2 != 0)
            {
                OddOccurance++;
            }
        }
        if (OddOccurance > k + 1)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }
}