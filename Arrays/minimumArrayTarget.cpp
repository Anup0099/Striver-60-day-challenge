/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
int minimumSubarray(vector<int> &arr, int target)
{
    int n = arr.size();
    int i = 0, j = 0;
    int minLen = INT_MAX;
    int sum = 0;
    while (j < n)
    {
        sum += arr[j];
        while (sum >= target)
        {
            minLen = min(minLen, j - i + 1);
            sum -= arr[i];
            i++;
        }
        j++;
    }
    return (minLen != INT_MAX) ? minLen : 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> arr = {2, 3, 1, 2, 4, 3};
    int target = 7;
    cout << minimumSubarray(arr, target) << endl;
}