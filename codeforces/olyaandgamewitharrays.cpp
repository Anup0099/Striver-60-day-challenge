#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> a;
        vector<int> b;
        int minn = 1e9;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            b.resize(k);
            for (auto &e : b)
                cin >> e;
            sort(b.begin(), b.end());
            minn = min(minn, b[0]);
            a.push_back(b[1]);
        }
        sort(a.begin(), a.end());
        a[0] = minn;
        cout << accumulate(a.begin(), a.end(), 0LL) << endl;
    }
}
