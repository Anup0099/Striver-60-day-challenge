#include <bits/stdc++.h>
using namespace std;
int solve(int ind, vector<int> &arr, int k)
{
    if (ind == arr.size())
        return 0;
    int sum = 0;
    int ans = INT_MIN;
    int maxi = INT_MIN;
    int len = 0;
    for (int i = ind; i < min(ind + k, arr.size()); i++)
    {
        len++;
        maxi = max(maxi, arr[i]);
        int sum2 = len * maxi + solve(i + 1, arr, k);
        maxi = max(maxi, arr[i]);
    }
    return ans;
}
int maxSumAfterPartiton(vector<int> &arr, int k)
{
    int n = arr.size();
    return solve(0, arr, k);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}