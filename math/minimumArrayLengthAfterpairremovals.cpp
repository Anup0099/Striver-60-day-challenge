#include <bits/stdc++.h>
using namespace std;

// You are given a 0-indexed sorted array of integers nums.

// You can perform the following operation any number of times:

// Choose two indices, i and j, where i < j, such that nums[i] < nums[j].
// Then, remove the elements at indices i and j from nums. The remaining elements retain their original order, and the array is re-indexed.
// Return an integer that denotes the minimum length of nums after performing the operation any number of times (including zero).
// Input: nums = [1,3,4,9]
// Output: 0
// Explanation: Initially, nums = [1, 3, 4, 9].
// In the first operation, we can choose index 0 and 1 because nums[0] < nums[1] <=> 1 < 3.
// Remove indices 0 and 1, and nums becomes [4, 9].
// For the next operation, we can choose index 0 and 1 because nums[0] < nums[1] <=> 4 < 9.
// Remove indices 0 and 1, and nums becomes an empty array [].
// Hence, the minimum length achievable is 0.
int minLengthAfterRemovals(vector<int> &nums)
{
    int n = nums.size();
    int ans = 0;
    // if (n == 0)
    // {
    //     return 0;
    // }
    if (n % 2 == 1)
    {
        return 1;
    }
    // if (n % 2 == 0)
    // {
    //     return 0;
    // }
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(nums[i]);
    }
    if(s.size()==1){
       ans= n;
    }
    else{
        ans=n-s.size();
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 1,2};
    cout << minLengthAfterRemovals(nums) << endl;
}