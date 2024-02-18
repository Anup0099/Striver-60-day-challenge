#include <bits/stdc++.h>
using namespace std;
int maximumLength(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[nums[i]]++;
    }
    int ans = 0;
    for (auto it : nums)
    {
        int curr_ans = 1;
        while (sqrt(it) * sqrt(it) == it and map[sqrt(it)] >= 2)
        {
            curr_ans += 2;
            it = sqrt(it);
        }
        ans = max(ans, curr_ans);
    }
    return ans;
}
int main()
{
    vector<int> nums = {2, 4, 16, 4, 2};
    cout << maximumLength(nums) << endl;
}