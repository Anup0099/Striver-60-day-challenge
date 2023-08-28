#include <bits/stdc++.h>
using namespace std;
int minimumSeconds(vector<int> &nums)
{
    int ans = nums.size();
    int n = nums.size();
    map<int, int> last;

    // duplicating my original array and adding to end of
    // original array
    for (int i = 0; i < n; ++i)
    {
        nums.push_back(nums[i]);
        last[nums[i]] = -1;
    }
    n = nums.size();
    cout << n << endl;
    // max time will store the maximum time for converting any segment
    // to some color x
    map<int, int> max_time;
    // what is ++i and i++ in c++? https://stackoverflow.com/questions/24853/what-is-the-difference-between-i-and-i
    for (int i = 0; i < n; ++i)
    {

        if (last[nums[i]] != -1)
        {
            // total time to convert all value in between ith and last index
            // where ith value was present
            int tot_time = (i - last[nums[i]]);

            tot_time /= 2;
            max_time[nums[i]] = max(max_time[nums[i]], tot_time);
        }
        // updating last index of ith value
        last[nums[i]] = i;
    }
    for (auto &x : max_time)
        cout << x.first << " " << x.second << endl;

    // now minimum time out of all maximum time for all value possible is my answer
    for (auto &x : max_time)
        ans = min(ans, x.second);

    return ans;
}
int main()
{
    vector<int> nums = {2, 1, 3, 4, 2};
    cout << minimumSeconds(nums);
}