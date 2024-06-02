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
        for (auto &it : a)
            cin >> it;
        int ans = 0;
        int index = INT_MAX;
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i - 1] == a[i + 1] and a[i] != a[i - 1])
            {

                index = i;
                break;
            }
        }
        int index1 = INT_MAX;
        for (int i = n - 1; i >= 1; i--)
        {
            if (a[i - 1] == a[i + 1] and a[i] != a[i - 1])
            {
                index1 = i;
                break;
            }
        }
        int temp = n - index1;

        if (index == INT_MAX || index1 == INT_MAX)
        {
            cout << -1 << endl;
        }
        else if (index == index1)
        {
            cout << index << endl;
        }
        else
        {
            cout << min(index, temp) << endl;
        }
    }
}