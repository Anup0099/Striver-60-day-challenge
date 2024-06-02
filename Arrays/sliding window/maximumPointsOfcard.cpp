#include <bits/stdc++.h>
using namespace std;
int maxScore(vector<int> &nums, int k)
{
    int n = nums.size();

    int left_sum = 0, right_sum = 0;
    for (int i = 0; i < k; i++)
    {
        left_sum += nums[i];
    }
    int r = n - 1;
    int maxi = left_sum;
    for (int i = k - 1; i >= 0; i--)
    {

        left_sum -= nums[i];
        right_sum += nums[r];
        r--;
        maxi = max(maxi, (right_sum + left_sum));
    }
    return maxi;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 1};
    int k = 3;
    cout << maxScore(nums, k) << endl;
    return 0;
}