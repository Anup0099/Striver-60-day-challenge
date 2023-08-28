#include <bits/stdc++.h>
using namespace std;
vector<int> twoPointers(vector<int> &arr, int target)
{
    // int n = arr.size();
    // unordered_map<int, int> mp;
    // for (int i = 0; i < n; i++)
    // {
    //     if (mp.find(target - arr[i]) != mp.end())
    //     {
    //         return {mp[target - arr[i]], i};
    //     }
    //     else
    //     {
    //         mp[arr[i]] = i;
    //     }
    // }
    // return {};
    vector<pair<int, int>> v;
    for (int i = 0; i < arr.size(); i++)
    {
        v.push_back({arr[i], i});
    }
    sort(v.begin(), v.end());
    int i = 0, j = arr.size() - 1;
    while (i < j)
    {
        if (v[i].first + v[j].first == target)
        {
            return {v[i].second, v[j].second};
        }
        else if (v[i].first + v[j].first > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return {};
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}