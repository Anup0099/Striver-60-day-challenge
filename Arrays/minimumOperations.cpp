#include <bits/stdc++.h>
using namespace std;
// You are given an array nums of positive integers and an integer k.

// In one operation, you can remove the last element of the array and add it to your collection.

// Return the minimum number of operations needed to collect elements 1, 2, ..., k.
int minimumOperation(vector<int> &nums, int k)
{

    int n = nums.size();
    int ans = 0;
    int j = 0;
    if(k==1)return 1;
    multiset<int> s;
    for (int i = 1; i <= k; i++)
    {
        s.insert(nums[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (s.find(nums[i]) != s.end())
        {
            s.erase(nums[i]);
        }
        ans++;
        // cout<<ans<<endl;
        if (s.empty())
        {
            break;
        }

    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << minimumOperation(nums, k);
    return 0;
}