#include <bits/stdc++.h>
using namespace std;
int missingTerm(vector<int> &nums)
{
    int n = nums.size();
    // find common difference
    int diff = (nums[n - 1] - nums[0]) / n;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (nums[i + 1] - nums[i] != diff)
    //     {
    //         return nums[i] + diff;
    //     }
    // }
    // return -1;
    int low = 0, high = n - 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] - nums[0] == mid * diff)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return nums[0] + low * diff;
}
int main()
{
    vector<int> nums = {1, 3, 5, 7, 9, 11, 15};
    cout << missingTerm(nums);
}