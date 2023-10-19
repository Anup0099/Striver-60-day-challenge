#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    set<int> s;
    for (int i = 0; i < m; i++)
    {
        s.insert(arr[i]);
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (s.find(i) != s.end())
        {
            ans.push_back(0);
        }
        else
        {
            int val = *upper_bound(s.begin(), s.end(), i);
            int diff = abs(val - i);
            ans.push_back(diff);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
