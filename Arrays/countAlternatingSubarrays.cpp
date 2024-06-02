#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
long long countAlternatingSubarrays(vector<int> &arr)
{
    int n = arr.size();
    long long count = n;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i; j < n - 1; j++)
    //     {
    //         if (arr[j] != arr[j + 1])
    //         {
    //             count++;
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    // }
    // return count;
    int i = 0, j = 0;
    while (j < n - 1)
    {
        if (arr[j] != arr[j + 1])
        {
            j++;
        }
        else
        {
            count += (((j - i) % mod) * ((j - i + 1) % mod)) / 2;
            i = j + 1;
            j++;
        }
    }
    count += (((j - i) % mod) * ((j - i + 1) % mod)) / 2;
    return count;
}
int solve(vector<int> &arr)
{
    long long ans = 0;
    int latest = -1;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (i > 0 and arr[i] == arr[i - 1])
        {
            latest = i - 1;
        }
        ans += i - latest;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 0, 1, 0};
    cout << solve(arr);
}