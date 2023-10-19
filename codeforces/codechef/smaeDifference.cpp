#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// you are given an array of integers count the number of pairs of indices(i,j) such that i<j and aj-ai =j-i example :3 5 1 4 6 6 output:
ll solve(vector<int> &arr, int n)
{
    ll count = 0;
    unordered_map<ll, ll> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i] - i]++;
    }
    for (auto it : map)
    {
        ll x = it.second;
        count = count + (x * (x - 1) / 2);
    }
    return count;
}
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << solve(arr, n) << endl;
    }
}