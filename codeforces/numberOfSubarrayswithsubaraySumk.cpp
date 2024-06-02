#include <bits/stdc++.h>
using namespace std;
int subarraySum(vector<int> &arr, int k)
{
    int n = arr.size();
    unordered_map<int, int> mp;
    int sum = 0;

    int ans = 0;
    mp[0]++;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (mp.find(sum - k) != mp.end())
        {
            ans += mp[sum - k];
        }
        mp[sum]++;
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 1, 1};
    int k = 2;
    cout << subarraySum(arr, k);
}