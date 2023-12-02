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
        vector<int> count;
        int x = 0;
        count.push_back(0);

        for (int i = 0; i < n;)
        {
            if (s[i] == '#')
            {
                i++;
                continue;
            }
            while (i < n and s[i] == '.')
            {
                i++;
                x++;
            }
            count.push_back(x);
            x = 0;
        }
        sort(count.begin(), count.end());
        if (count.back() < 3)
        {
            cout << accumulate(count.begin(), count.end(), 0) << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}