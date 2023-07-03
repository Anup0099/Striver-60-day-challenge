#include <bits/stdc++.h>
using namespace std;
int numberOfGoodSubarraySplits(vector<int> &nums)
{
    int n = nums.size();
    long long count = 0;
    long long ans = 1;
    long long mod = 1000000007;
    int i = 0;

    while (i < n && nums[i] == 0)
    {
        ++i;
    }
    if (i >= n)
        return 0;
    while (i < n)
    {
        if (nums[i] == 1)
        {
            ans = (ans * (count + 1)) % mod;
            count = 0;
        }
        else
        {
            count++;
        }
        i++;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}