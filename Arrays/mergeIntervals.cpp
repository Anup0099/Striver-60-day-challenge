#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> result;
    result.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); i++)
    {
        int curr_start = intervals[i][0];
        int curr_end = intervals[i][1];
        if (curr_start > result.back()[1])
        {
            //no overlap so push back
            result.push_back(intervals[i]);
        }else
        {
            //overlap so update the end
            result.back()[1]=max(result.back()[1],curr_end);
        }
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}