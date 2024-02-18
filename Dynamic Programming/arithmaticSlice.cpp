#include <bits/stdc++.h>
using namespace std;
int numberOfArithmeticSlices(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<long, int> mp[n];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            long diff = (long)nums[i] - nums[j];
            auto it = mp[j].find(diff);
            int count = 0;
            if (it != mp[j].end())
            {
                count = it->second;
            }
            mp[i][diff] += count + 1;
            res += count;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (auto it : mp[i])
        {
            cout << it.first << " " << it.second << endl;
        }
        cout << endl;
    }
    return res;
}
int main() {
    vector<int> nums = {2, 4, 6, 8, 10};
    cout << numberOfArithmeticSlices(nums) << endl;
}