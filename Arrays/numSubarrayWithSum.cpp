#include <bits/stdc++.h>
using namespace std;
int numSubarraysWithSum(vector<int> &nums, int goal)
{

    int n = nums.size();
    int i = 0, j = 0;
    int sum = 0;
    int count = 0;
    while (j < n) {
        sum += nums[j];
        if (sum < goal) {
            j++;
        } else if (sum == goal) {
            count++;
            j++;
        } else if (sum > goal) {
            while (sum > goal && i <= j) {
                sum -= nums[i];
                i++;
            }
            if (sum == goal) {
                count++;
            }
            j++;
        }
    }
    return count;
}
int main()
{
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;
    cout << numSubarraysWithSum(nums, goal) << endl;
    return 0;
}