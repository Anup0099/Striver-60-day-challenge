/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;

// int specialArray(vector<int> &nums)
// {
//     int n = nums.size();
//     sort(begin(nums), end(nums));
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {

//         if (nums[i] >= count)
//         {
//             count++;
//             if (count > nums[i])
//             {
//                 return -1;
//             }
//         }
//         else
//         {
//             return count;
//         }
//     }
//     return n;
// }
int solve(vector<int> &arr, int mid)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] >= mid)
        {
            count++;
        }
    }
    return count;
}
int specialArray(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int low = 1, high = n;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int count = arr.end() - lower_bound(arr.begin(), arr.end(), mid) ;if (count == mid)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (count < mid)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums = {0, 0};
    cout << specialArray(nums) << endl;
}