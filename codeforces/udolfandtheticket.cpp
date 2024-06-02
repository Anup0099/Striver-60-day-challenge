#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> arr1(m);
        for (int i = 0; i < m; i++)
        {
            cin >> arr1[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i] + arr1[j] <= k)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}