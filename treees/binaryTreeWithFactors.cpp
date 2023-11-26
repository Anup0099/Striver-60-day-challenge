#include <bits/stdc++.h>
using namespace std;
int binaryTreeIWithFactors(vector<int> &arr)
{
    int n = arr.size();
    sort(begin(arr), end(arr));
    unordered_map<long, long> mp;
    mp[arr[0]] = 1;
    for (int i = 1; i < n; i++)
    {
        mp[arr[i]] = 1;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int root = arr[i];
        mp[arr[i]] = 1; // this is for the root
        for (int j = 0; j < i; j++)
        {
            int lc = arr[i] % arr[j];
            int right = arr[i] / arr[j];
            //    now we have to find for right child
            if (lc == 0 and mp.find(right) != mp.end())
            {
                mp[arr[i]] += mp[arr[j]] * mp[right];
            }
        }
    }
    for (auto it : mp)
    {
        ans += it.second;
    }
    return ans % 1000000007;
}
int main() {}