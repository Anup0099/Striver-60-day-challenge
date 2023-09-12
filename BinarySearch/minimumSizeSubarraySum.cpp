#include <bits/stdc++.h>
using namespace std;
int minSubarrayLen(int target, vector<int> &nums)
{
    int i = 0, j = 0;
    int n = nums.size();
    int minLen = INT_MAX;
    int sum = 0;
    while (j < n)
    {
        sum += nums[j];
        while (sum >= target)
        {
            if (j - i + 1 < minLen)
            {
                minLen = j - i + 1;
            }
            sum -= nums[i];
            i++;
        }
        j++;
    }
    if (minLen == INT_MAX)
        return 0;
    return minLen;
}

int minSubArrayLen(int target, vector<int> &nums)
{
    int n = nums.size();
    vector<int> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + nums[i - 1];
    }
    int minLen = INT_MAX;
    for (int i = 0; i <= n; i++)
    {
        int to_find = target + prefix[i]; // here to_find is the sum of subarray starting from i

        auto it = lower_bound(prefix.begin(), prefix.end(), to_find);
        // if it is found then it will return the index of the element
        if (it != prefix.end())
        {
            int index = it - prefix.begin();
            if (index - i < minLen)
            {
                minLen = index - i;
            }
        }
    }
    if (minLen == INT_MAX)
        return 0;
    return minLen;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> a = {1, 2, 3, 4, 5};
    int target = 11;
    cout << minSubArrayLen(target, a);
}