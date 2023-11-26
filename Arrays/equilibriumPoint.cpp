#include <bits/stdc++.h>
using namespace std;
int equilibriumPoint(long long a[], int n)
{
    int sum = 0;
    int prefix[n];
    prefix[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    for (int i = 1; i < n; i++)
    {
        int left = prefix[i] - a[i];
        int right = prefix[n - 1] - prefix[i];
        if (left == right)
        {
            return i + 1;
        }
    }
    return -1; // time complexity of this will be O(n) and brute force time complixity will be O(n^2)
}
int main() {}