#include <bits/stdc++.h>
using namespace std;
int kthelement(int arr1[], int arr2[], int n, int m, int k)
{
    if (n > m)
    {
        return kthelement(arr2, arr1, m, n, k);
    }
    int low = max(0, k - m), high = max(k, m);
    while (low <= high)
    {
        int cut1 = (low + high) / 2;
        int cut2 = k - cut1;
        int l1 = 0, l2 = 0, r1 = 0, r2 = 0;
        if (cut1 == 0)
        {
            l1 = INT_MIN;
        }
        else
        {
            l1 = arr1[cut1 - 1];
        }
        if (cut2 == 0)
        {
            l2 = INT_MIN;
        }
        else
        {
            l2 = arr2[cut2 - 1];
        }
        if (cut1 == n)
        {
            r1 = INT_MAX;
        }
        else
        {
            r1 = arr1[cut1];
        }
        if (cut2 == m)
        {
            r2 = INT_MAX;
        }
        else
        {
            r2 = arr2[cut2];
        }
        if (l1 <= r2 && l2 <= r1)
        {
            return max(l1, l2);
        }
        else if (l1 > r2)
        {
            high = cut1 - 1;
        }
        else
        {
            low = cut1 + 1;
        }
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}