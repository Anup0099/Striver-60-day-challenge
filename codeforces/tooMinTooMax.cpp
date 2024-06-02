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
        sort(begin(arr), end(arr));
        int i = arr[n - 1];
        int j = arr[0];
        int k = arr[n - 2];
        int l = arr[1];
        int sum = abs(i - j) + abs(j - k) + abs(k - l) + abs(l - i);
        cout << sum << endl;
    }
}