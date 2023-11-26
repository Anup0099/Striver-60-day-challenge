#include <bits/stdc++.h>
using namespace std;
// int jobScheduling(vector<int> &startTime, vector<int> &endTime, vector<int> &profit)
// {
// }
vector<int> slidingWindowMaximum(vector<int> &arr, int k)
{
    int n = arr.size();
    int i = 0, j = 0;
    int maxi = INT_MIN;
    int count = 0;
    vector<int> ans;
    while (j < n)
    {
        maxi = max(maxi, arr[j]);
        if (j - i + 1 < k)
            j++;
        else if (j - i + 1 == k)
        {
            ans.push_back(maxi);

            maxi = INT_MIN;
            j = i; // in this case we have to start from i because we have to find the max element in the next window  means we have to find the max element in the window 3 1 2 and 2 is the max element in the window 1 2 0 and 5 is the max element in the window 2 0 5 but we have to start from 1 because we have to find the max element in the next window time complexity is O(n*k)
            i++;
            j++;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 3, 1, 2, 0, 5};
    // output: 3 3 2 5 because 3 is the max element in the window 1 3 1 and 3 is the max element in the window 3 1 2 and 2 is the max element in the window 1 2 0 and 5 is the max element in the window 2 0 5 but w

    vector<int> ans = slidingWindowMaximum(arr, 3);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}