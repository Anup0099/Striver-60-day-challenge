#include <bits/stdc++.h>
using namespace std;
int minimumSumOfMountainArray(vector<int> &nums)
{

    int n = nums.size();
    int minimum = nums[0];
    vector<int> left(n), right(n);
    for (int i = 1; i < n; i++)
    {
        left[i] = minimum;
        minimum = min(minimum, nums[i]);
    }
    minimum = nums[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = minimum;
        minimum = min(minimum, nums[i]);
    }
    int minimimSum = INT_MAX;
    for (int i = 1; i < n - 1; i++)
    {
        int sum = 0;
        int lefts = left[i];
        int rights = right[i];
        if (lefts < nums[i] && rights < nums[i])
        {
            sum = lefts + rights + nums[i];
            minimimSum = min(minimimSum, sum);
        }
    }
    return minimimSum == INT_MAX ? -1 : minimimSum;
}
int main() {}