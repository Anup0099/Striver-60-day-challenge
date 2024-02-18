#include <bits/stdc++.h>
using namespace std;
int maximumNumberOfOperation(vector<int> &nums)
{
    int n = nums.size();
    int sum = nums[0] + nums[1];
    int ans = 1;
    for (int i = 2; i < n - 1; i += 2)
    {
        int temp = nums[i] + nums[i + 1];
        if (temp == sum)
        {
            ans++;
        }
        else
        {
            break;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {3, 2, 1, 4, 5};
    cout << maximumNumberOfOperation(nums) << endl;
    return 0;
}