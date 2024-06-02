#include <bits/stdc++.h>
using namespace std;
int eraseOverlapIntervals(vector<vector<int>> &intervals)
{
        int n = intervals.size();
        int m = intervals[0].size();
        int count = 1;
        sort(begin(intervals), end(intervals), [](vector<int> &a, vector<int> &b)
            { return a[1] < b[1]; });
        for (int i = 1; i < n; i++)
        {
            int currstart = intervals[i][0];
            int currend = intervals[i][1];
            int prevstart = intervals[i - 1][0];
            int prevend = intervals[i - 1][1];
            if (currstart >= prevend)
            {
                prevend = currend;
                count++;
            }
        }
        return n - count;
}
int main()
{
    
}