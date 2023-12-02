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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(arr[i]);
        }
        if (is_sorted(arr.begin(), arr.end()))
        {
            cout << "YES" << '\n';
            continue;//what does continue do? 
        }
        if (s.size() == k)
        {
            cout << "YES" << '\n';
        }
        else if (k >= 2)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}