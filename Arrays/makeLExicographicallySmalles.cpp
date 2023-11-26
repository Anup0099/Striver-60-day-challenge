#include <bits/stdc++.h>
using namespace std;
// Make Lexicographically Smallest Array by Swapping Elements

// You are given a 0-indexed array of positive integers nums and a positive integer limit.

// In one operation, you can choose any two indices i and j and swap nums[i] and nums[j] if |nums[i] - nums[j]| <= limit.

// Return the lexicographically smallest array that can be obtained by performing the operation any number of times.

// An array a is lexicographically smaller than an array b if in the first position where a and b differ, array a has an element that is less than the corresponding element in b. For example, the array [2,10,3] is lexicographically smaller than the array [10,2,3] because they differ at index 0 and 2 < 10.
vector<int> lexicographicallySmallestArray(vector<int> &nums, int limit)
{
    int n = nums.size();
    
    
    
}

int main() {
    vector<int> nums = {1,3,5,8,9};
    int limit = 3;
    vector<int> ans = lexicographicallySmallestArray(nums, limit);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
// [1,3,5,8,9]
// [1,6,7,18,1,2]
// [1,7,28,19,10]