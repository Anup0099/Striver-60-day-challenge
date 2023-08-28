#include <bits/stdc++.h>
using namespace std;

vector<int> index(vector<int> &arr, int target)
{
    int n = arr.size();
    vector<int> v;

    // prefix sum
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    for (auto it : prefix)
    {
        cout << it << " ";
    }
    // check if range sum is equal to target
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = prefix[j] - prefix[i] + arr[i];
            if (sum == target)
            {
                v.push_back(i+1);
                v.push_back(j+1);
                return v;
            }
        }
    }
    return v;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (auto &i : arr)
    {
        cin >> i;
    }
    vector<int> v = index(arr, target);
    for (auto &i : v)
    {
        cout << i << " ";
    }
}