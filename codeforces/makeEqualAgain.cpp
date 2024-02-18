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

        int ans = 0;
        int i = 0, j = n - 1;
        int count1 = 0, count2 = 0;
        while (i < n and arr[0] == arr[i])
        {
            i++;
            count1++;
        }
        while (j >= 0 and arr[n - 1] == arr[j])
        {
            j--;
            count2++;
        }
        if (arr[0] == arr[n - 1])
        {
            ans = max(0, n - (count1 + count2));
            cout << ans << endl;
        }
        else
        {
            ans = min(n - count1, n - count2);
            cout << ans << endl;
        }
    }
}