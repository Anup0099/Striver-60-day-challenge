#include <bits/stdc++.h>
using namespace std;
int threesumclosest(vector<int> &nums, int target)
{
    int n = nums.size();
    sort(begin(nums), end(nums));
    int i = 0, j = n;
    for (int k = 0; k < n; k++)
    {
        int closest = INT_MAX;
        while (i < j)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < target)
            {
                closest = min(closest, abs(sum - target));
                i++;
            }
            else if (sum > target)
            {
                closest = min(closest, abs(sum - target));
                j--;
            }
        }
        
    }
    int main()
    {
        vector<int> nums = {-1, 2, 1, 4};
        int target = 1;
        cout << threesumclosest(nums, target);
    }