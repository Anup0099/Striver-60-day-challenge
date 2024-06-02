#include <bits/stdc++.h>
using namespace std;

int minGroups(vector<int> &nums)
{
    vector<int> counts(31, 0);
    for (int num : nums)
    {
        for (int i = 0; i < 31; ++i)
        {
            if (num & (1 << i))
            {
                ++counts[i];
            }
        }
    }
    return *max_element(counts.begin(), counts.end());
}

int main()
{
    vector<int> nums = {1, 4, 3, 4}; // replace with your numbers
    cout << minGroups(nums) << "\n";
    return 0;
}