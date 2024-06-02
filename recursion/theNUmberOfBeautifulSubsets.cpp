/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &arr, int k, int ind, unordered_map<int, int> mp)
{
    if (ind == arr.size())
        return 0;
    int take = 0, notake = 0;
    if (!mp[arr[ind] - k] and !mp[arr[ind] + k])
    {
        mp[arr[ind]]++;
        take = 1 + solve(arr, k, ind + 1, mp);
        mp[arr[ind]]--;
    }
    notake = solve(arr, k, ind + 1, mp);
    return take + notake;
}
int beautifulSubsets(vector<int> &arr, int k)
{
    int n = arr.size();
    unordered_map<int, int> mp;
    return solve(arr, k, 0, mp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;
    cout << beautifulSubsets(arr, k) << endl;
}