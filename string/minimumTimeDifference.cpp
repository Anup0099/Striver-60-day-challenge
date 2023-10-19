#include <bits/stdc++.h>
using namespace std;
// given a list of 24-hour colck time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.

int findMinDifference(vector<string> &time)
{
    int n = time.size();
    vector<int> minutes;
    //    given 24hr minute
    for (int i = 0; i < n; i++)
    {
        int hr = stoi(time[i].substr(0, 2));  // here we are converting hour string to integer
        int min = stoi(time[i].substr(3, 2)); // here we are converting minute string to integer

        minutes.push_back(hr * 60 + min); // here we are converting hour to minute and adding with minute
    }
    sort(minutes.begin(), minutes.end());
    int minDiff = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        minDiff = min(minDiff, minutes[i] - minutes[i - 1]);//here we are finding minimum difference between two time
    }
    int corner = min(24 * 60 - minutes[n - 1] + minutes[0], minDiff);//here we are finding minimum difference between last time and first time and 24*60 is total minutes in 24 hours and we are subtracting last time  from 24*60 and adding with first time and finding minimum difference between them
    return corner;
}
int main() {}