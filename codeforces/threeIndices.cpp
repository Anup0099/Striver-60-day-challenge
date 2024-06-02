#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> ans;
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i - 1] and a[i] > a[i + 1])
            {
                ans.push_back(i);
                ans.push_back(i + 1);
                ans.push_back(i + 2);
                break;
            }
        }
        if (ans.size() == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
        }
    }
}