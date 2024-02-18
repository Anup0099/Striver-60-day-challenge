#include <bits/stdc++.h>
using namespace std;
long countSubarrays(int a[], int n, int L, int R)
{
    // Complete the function
    int count = 0;
    int i = 0, j = 0;
    int ans = 0;
    while (j < n)
    {
        if (a[j] >= L and a[j] <= R)
        {
            count = j - i + 1;
            ans += count;
        }
        else if (a[j] < L)
        {
            ans += count;
        }
        else
        {
            i = j + 1;
            count = 0;
        }
        j++;
    }
    return ans;
}
int main() {}