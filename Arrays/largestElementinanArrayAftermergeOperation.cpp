#include <bits/stdc++.h>
using namespace std;
long long maxArrayValue(vector<int> &nums)
{
    int n = nums.size();
    int sum = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] <= nums[i + 1])
        {
            nums[i + 1] = nums[i] + nums[i + 1];
            maxi = max(maxi, nums[i + 1]);
            nums[i] = 0;
        }
    }
    return maxi;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> nums(n);

    cout << maxArrayValue(nums);
}