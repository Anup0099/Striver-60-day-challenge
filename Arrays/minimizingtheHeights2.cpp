#include <bits/stdc++.h>
using namespace std;
int getMinDiff(int arr[], int n, int k)
{
    int ans = 0;
    sort(arr, arr + n);
    int maxi;
    int mini;
    int res = arr[n - 1] - arr[0];
    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i] >= k)
        {
            maxi = max(arr[i - 1] + k, arr[n - 1] - k);
            mini = min(arr[0] + k, arr[i] - k);
            res = min(res, (maxi - mini));
        }
    }
    return res;
}
int main()
{
    int n = 8, k = 7;

    int arr[] = {1, 8, 10, 6, 4, 6, 9, 1};
    cout << getMinDiff(arr, n, k);
}