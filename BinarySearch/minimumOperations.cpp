#include <bits/stdc++.h>
using namespace std;
int minOperations(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    int maxi = *max_element(nums.begin(), nums.end());
    int mini = *min_element(nums.begin(), nums.end());
    if ((maxi - mini) == n - 1)
    {
        return 0;
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            if (nums[i] > n)
            {
                count++;
            }
        }
    }
    return abs(n - count);
}
int main() {}