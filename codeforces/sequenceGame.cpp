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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> v = {a[0]};

        for (int i = 1; i < n; i++)
        {
            if (a[i] < v.back())
            {
                v.push_back(1);
            }

            v.push_back(a[i]);
        }
        cout << v.size() << endl;
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}