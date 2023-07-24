#include <bits/stdc++.h>
using namespace std;
int max(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int i = 0, j = 0;
    int ans = INT_MIN;
    while (j < n)
    {
        if (nums[j] - nums[i] > 2 * k)
            i++;
        else
            ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}