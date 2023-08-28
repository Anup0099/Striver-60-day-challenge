#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &a, int i, int j)
{
    if (i > j)
        return 0;
    int maxi = INT_MIN;
    for (int ind = i; ind <= j; ind++)
    {
        int cost = a[i - 1] * a[i] * a[i + 1] + f(a, i, ind - 1) + f(a, ind + 1, j);
        maxi = max(maxi, cost);
    }
    return maxi;
}
int maxCoins(vector<int> &a)
{
    int n = a.size();
    a.push_back(1);
    a.insert(a.begin(), 1);
    return f(a, 1, n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}