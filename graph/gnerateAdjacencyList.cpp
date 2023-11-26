#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generateAdjacencyList(int V, int E, vector<vector<int>> &edges)
{
    // Write Code Here
    vector<vector<int>> ans;
    int n = edges.size();
    int m = edges[0].size();
    sort(edges.begin(), edges.end());
    int i = 0;
}
int smallSum(vector<int> &arr, int k)
{
    int mod = 1e9 + 7;
    int n = arr.size();
    vector<int> ans(n + 1);
    ans[n] = arr[0];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        ans[i] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (ans[i] < ans[i + 1])
        {
            sum += ans[i];
        }
        else
        {
            sum += ans[i] % k;
        }
    }
    return sum % mod;
}
int main() {}
