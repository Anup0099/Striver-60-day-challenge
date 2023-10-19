#include <bits/stdc++.h>
using namespace std;
int searchInArotatedSortedArray(vector<int> &nums, int target)
{
    int n = nums.size();
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        cout << mid;
        if (nums[mid] == target)
            return mid;
        if (nums[left] <= nums[mid])
        {
            if (nums[left] <= target and target <= nums[right])
            {
                // element exists
                right = mid - 1;
            }
            else
            {

                left = mid + 1;
            }
        }
        else
        {

            if (nums[mid] <= target and target <= nums[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {1, 3};
    int target = 3;
    cout << searchInArotatedSortedArray(nums, target);
    return 0;
}


//  int n=arr.size();
//            int low = 0, high = n - 1;
//     while (low <= high) {
//         int mid = (low + high) / 2;

//         //if mid points the target
//         if (arr[mid] == k) return mid;

//         //if left part is sorted:
//         if (arr[low] <= arr[mid]) {
//             if (arr[low] <= k && k <= arr[mid]) {
//                 //element exists:
//                 high = mid - 1;
//             }
//             else {
//                 //element does not exist:
//                 low = mid + 1;
//             }
//         }
//         else { //if right part is sorted:
//             if (arr[mid] <= k && k <= arr[high]) {
//                 //element exists:
//                 low = mid + 1;
//             }
//             else {
//                 //element does not exist:
//                 high = mid - 1;
//             }
//         }
//     }
//     return -1;