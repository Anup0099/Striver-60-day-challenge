#include <bits/stdc++.h>
using namespace std;
// You have n processors each having 4 cores and n * 4 tasks that need to be executed such that each core should perform only one task.

// Given a 0-indexed integer array processorTime representing the time at which each processor becomes available for the first time and a 0-indexed integer array tasks representing the time it takes to execute each task, return the minimum time when all of the tasks have been executed by the processors.
int minimumProcessing(vector<int> processorTime, vector<int> tasks)
{
    int n = processorTime.size();
    int m = tasks.size();
    if (n * 4 < m)
    {
        return -1;
    }
    // what the question is saying is that we have n processors and each processor has 4 cores
    // so we have n*4 cores in total
    // and we have n*4 tasks to be executed
    // so we have to assign each task to each core such that each core has only one task to execute and each processor has 4 tasks to execute
    sort(processorTime.begin(), processorTime.end());
    sort(tasks.begin(), tasks.end());
    int ans = 0;
    int i = 0;
    int j = 0;
    while (i < n and j < m)
    {
        ans = max(ans, processorTime[i] + tasks[j]);
        i++;
        j += 4;
    }
    return ans;
}
int main() {}