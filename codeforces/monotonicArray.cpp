#include <bits/stdc++.h>
using namespace std;
// alice likes the prime number most. Leo gave an array arr of size N to Alice and asked him to determine the maximum distance between the indexes of two prime numbers in the given array. If the array doesn't contain any prime number then return -1

// bool isMonotonic(vector<int> &arr)
// {
//     bool inc = true;
//     bool dec = true;
//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             inc = false;
//         }
//         if (arr[i] < arr[i + 1])
//         {
//             dec = false;
//         }
//     }
//     return inc || dec;
// }
bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (isPrime(arr[i]) && isPrime(arr[j]))
            {
                ans = max(ans, j - i);
            }
        }
    }
    if (ans == 0)
    {
        cout << -1;
    }
    else
    {
        cout << ans;
    }
}