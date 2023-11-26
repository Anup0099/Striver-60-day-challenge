#include <bits/stdc++.h>
using namespace std;
// You are given a 2D 0-indexed array of strings, access_times, with size n. For each i where 0 <= i <= n - 1, access_times[i][0] represents the name of an employee, and access_times[i][1] represents the access time of that employee. All entries in access_times are within the same day.

// The access time is represented as four digits using a 24-hour time format, for example, "0800" or "2250".

// An employee is said to be high-access if he has accessed the system three or more times within a one-hour period.

// Times with exactly one hour of difference are not considered part of the same one-hour period. For example, "0815" and "0915" are not part of the same one-hour period.

// Access times at the start and end of the day are not counted within the same one-hour period. For example, "0005" and "2350" are not part of the same one-hour period.

// Return a list that contains the names of high-access employees with any order you want.
vector<string> maximumAccessTime(vector<vector<string>> &nums)
{
    int n = nums.size();
    int m = nums.size();
    map<string, vector<string>> mp;
    vector<string> res;
    for (int i = 0; i < n; i++)
    {
        string name = nums[i][0];
        string time = nums[i][1];
        mp[name].push_back(time);
    }
    for (auto it : mp)
    {
        int times = it.second.size();
        if (times >= 3)
        {
            sort(it.second.begin(), it.second.end());
            for (int i = 0; i < times - 2; i++)
            {
                int hour1 = stoi(it.second[i].substr(0, 2));
                int hour2 = stoi(it.second[i + 2].substr(0, 2));
                int min1 = stoi(it.second[i].substr(2, 2));
                int min2 = stoi(it.second[i + 2].substr(2, 2));
                // we have to check within one hour period time with exactly one hour difference is not considered and access time at start and end of day are not counted within one hour period
                if (hour2 - hour1 == 1 && abs(min2 - min1) != 0 || hour2 - hour1 == 0 and abs(min2 - min1) <= 60)
                {
                    res.push_back(it.first);
                    break;
                }
                else if (hour2 - hour1 > 1)
                {
                    // res.push_back(it.first);
                    // break;
                }
            }
        }
    }
    return res;
}
int main()
{
    // [["akuhmu","0454"],["aywtqh","0523"],["akuhmu","0518"],["ihhkc","0439"],["ihhkc","0508"],["akuhmu","0529"],["aywtqh","0530"],["aywtqh","0419"]]
    // [["qzgyyji","1945"],["qzgyyji","1855"],["jsxkxtugi","1859"],["hhjuaxal","1940"],["hhjuaxal","1831"],["jsxkxtugi","1841"],["hhjuaxal","1918"],["jsxkxtugi","1941"],["hhjuaxal","1852"]]
    // vector<vector<string>> nums = {{"qzgyyji", "1945"}, {"qzgyyji", "1855"}, {"jsxkxtugi", "1859"}, {"hhjuaxal", "1940"}, {"hhjuaxal", "1831"}, {"jsxkxtugi", "1841"}, {"hhjuaxal", "1918"}, {"jsxkxtugi", "1941"}, {"hhjuaxal", "1852"}};
    vector<vector<string>>nums={{ "akuhmu","0454" },{ "aywtqh","0523" },{ "akuhmu","0518" },{ "ihhkc","0439" },{ "ihhkc","0508" },{ "akuhmu","0529" },{ "aywtqh","0530" },{ "aywtqh","0419" }};
    vector<string> res = maximumAccessTime(nums);
    for (auto it : res)
    {
        cout << it << " ";
    }
}