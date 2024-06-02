#include <bits/stdc++.h>
using namespace std;
bool canPlaceCows(vector<int> &arr, int n, int dist, int cows)
{
    int countCows = 1;
    int last = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - last >= dist)
        {
            countCows++;
            last = arr[i];
        }
        if (countCows >= cows)
        {
            return true;
        }
    }
    return false;
}
int aggresiveCows(vector<int> &arr, int k)
{
    int n = arr.size();
    sort(begin(arr), end(arr));

    int limit = arr[n - 1] - arr[0];
    
    int low = 1, high = limit;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (canPlaceCows(arr, n, mid, k))
        {

            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}
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
        cout << aggresiveCows(arr, k) << endl;
    }
}