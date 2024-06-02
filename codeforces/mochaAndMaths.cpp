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
        vector<int> arr(n);
        for (auto &it : arr)
        {
            cin >> it;
        }
        if (n == 1)
        {
            cout << arr[0] << endl;
            continue;
        }
        int ans = arr[0];
        for (int i = 1; i < n; i++)
        {
            ans = ans & arr[i];
        }
        cout << ans << endl;
    }
}