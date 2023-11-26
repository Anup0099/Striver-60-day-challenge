#include <bits/stdc++.h>
using namespace std;
int solve(int i, int j, vector<int> &arr, int n)
{
    if (i > j)
        return 0;

    int mini = INT_MAX;
    for (int k = 1; k <= n; k++)
    {
        int cost = abs(arr[j + 1] - arr[i - 1]) + solve(i, k, arr, n) + solve(k + 1, j, arr, n);
        mini = min(mini, cost);
    }

    return mini;
}
int minimumCost(int n, vector<int> &arr)
{
    int m = arr.size();
    int i = 0;

    int j = n - 1;
    arr.push_back(n);
    arr.insert(arr.begin(), 0);
    return solve(i, j, arr, n);
}
int main()
{
}