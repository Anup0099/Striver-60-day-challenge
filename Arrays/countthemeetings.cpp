/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> mergeMeetings(vector<pair<int, int>> &meetings)
{
    // Sort the meetings by start time
    sort(meetings.begin(), meetings.end());

    // Initialize the result vector with the first meeting
    vector<pair<int, int>> mergedMeetings;
    mergedMeetings.push_back(meetings[0]);

    for (int i = 1; i < meetings.size(); i++)
    {
        // Get the last merged meeting and the current meeting
        pair<int, int> &lastMergedMeeting = mergedMeetings.back();
        const pair<int, int> &currentMeeting = meetings[i];

        // If the current meeting overlaps with the last merged one, merge them
        if (currentMeeting.first <= lastMergedMeeting.second)
        {
            lastMergedMeeting.second = max(lastMergedMeeting.second, currentMeeting.second);
        }
        else
        {
            // Add the current meeting since it doesn't overlap
            mergedMeetings.push_back(currentMeeting);
        }
    }

    return mergedMeetings;
}
int countDays(int days, vector<vector<int>> &meetings)
{
    int n = meetings.size();
    int m = meetings[0].size();
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({meetings[i][0], meetings[i][1]});
    }
    sort(v.begin(), v.end());
    int count = 0;
    //    merge our starting and ending time if ending time is greater than next meeting staring time then we have to merge
    vector<pair<int, int>> mergedMeetings = mergeMeetings(v);
    for (int i = 0; i < mergedMeetings.size(); i++)
    {
        int temp = mergedMeetings[i].second - mergedMeetings[i].first;
        count += temp + 1;
    }
    return days - count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int days = 5;
    vector<vector<int>> meetings =  {{1, 3}, {2, 4}};
    cout << countDays(days, meetings);
}