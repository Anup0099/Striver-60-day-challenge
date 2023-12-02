#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sort(arr.begin(), arr.end());
    int i = 0, j = 0;
    int sum = 0;
    int ans = 0;
    while (j < n)
    {
        sum += arr[j];
        while (sum > t)
        {
            sum -= arr[i];
            i++;
        }
        ans = max(ans, j - i + 1);
        j++;
    }
    cout << ans;
}