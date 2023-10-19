#include <bits/stdc++.h>
using namespace std;
// You are given a 0-indexed array nums of length n containing distinct positive integers. Return the minimum number of right shifts required to sort nums and -1 if this is not possible.

// A right shift is defined as shifting the element at index i to index (i + 1) % n, for all indices.
// Input: nums = [3,4,5,1,2]
// Output: 2
// Explanation:
// After the first right shift, nums = [2,3,4,5,1].
// After the second right shift, nums = [1,2,3,4,5].
// Now nums is sorted; therefore the answer is 2.
int minimumRightShifts(vector<int> &nums)
{
    int n = nums.size();
    vector<int> temp = nums;
    for (int i = 0; i < n; i++)
    {
        temp.push_back(nums[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int f = 0;
        for (int j = i + 1; j < i + n; j++)
        {
            if (temp[j] < temp[j - 1])
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            return (n - i) % n;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};
    cout << minimumRightShifts(nums) << endl;
}