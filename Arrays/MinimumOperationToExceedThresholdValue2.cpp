#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int minimumOperationToExceedThresholdValue(vector<int> &nums, int k)
{
    int n = nums.size();

    priority_queue<long long, vector<long long>, greater<long long>> pq;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        pq.push(nums[i]);
    }
    while (pq.top() < k)
    {
        long long x = pq.top();
        pq.pop();
        long long y = pq.top();
        pq.pop();
        long long sum = (long long)(min(x, y) * 2) % mod + max(x, y);
        ans++;
        pq.push(sum);
    }
    return ans;
}
int solve(vector<int> &nums, int k)
{
    int n = nums.size();
    multiset<long long> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(nums[i]);
    }
    int ans = 0;
    int first = *s.begin();
    while (first < k)
    {
        long long x = *s.begin();
        s.erase(s.begin());
        long long y = *s.begin();
        s.erase(s.begin());
        long long sum = (min(x, y) * 2) % mod + max(x, y);
        ans++;
        s.insert(sum);
        first = *s.begin();//update first

    }
    return ans;
}
int main()
{
    vector<int> nums = {999999999, 999999999, 999999999};

    int k = 1000000000;
    cout << solve(nums, k) << endl;
    return 0;
}