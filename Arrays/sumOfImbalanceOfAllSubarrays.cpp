#include <bits/stdc++.h>
using namespace std;
int imbalance(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int imbalance = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i + 1] - nums[i] > 1)
        {
            imbalance++;
        }
    }
    return imbalance;
}
int sumImbalanceNumbers(vector<int> &nums)
{
    int n = nums.size();
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            vector<int> subarray(nums.begin() + i, nums.begin() + j + 1);
            sum += imbalance(subarray);
        }
    }
    return sum;
}
int main()
{
    vector<int> nums = {2, 3, 1, 4};
    cout << sumImbalanceNumbers(nums) << endl;
    return 0;
}