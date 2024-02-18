#include <bits/stdc++.h>
using namespace std;
int power(int n, int root)
{
    int ans = 1;
    for (int i = 1; i <= root; i++)
    {
        ans *= n;
    }
    return ans;
}
int nthRootOfAnInteger(int n, int root)
{
    int low = 1, high = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (power(mid, root) == n)
        {
            return mid;
        }
        else if (power(mid, root) < n)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n, root;
    cin >> n >> root;
    cout << nthRootOfAnInteger(n, root);
}