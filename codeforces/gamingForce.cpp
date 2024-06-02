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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                count++;
            }
        }
        int ans = ceil((double)count / 2) + n - count;
        cout << ans << endl;
    }
}