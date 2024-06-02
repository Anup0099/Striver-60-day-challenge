#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &nums, int k)
{
    int sum = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        sum += ceil((double)nums[j] / (double)k);
    }

    return sum;
}
int smallestDivisor(vector<int> &nums, int threshold)
{
    int n = nums.size();
    int ans = 0;

    int mini = INT_MAX;
    int maxi = *max_element(begin(nums), end(nums));
    int low = 1, high = maxi;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int sum = solve(nums, mid);
        if (sum <= threshold)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;
    cout << smallestDivisor(nums, threshold) << endl;
    return 0;
}