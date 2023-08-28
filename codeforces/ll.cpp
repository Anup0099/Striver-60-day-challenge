#include <bits/stdc++.h>
using namespace std;
// You are given positive integers n and target.

// An array nums is beautiful if it meets the following conditions:

// nums.length == n.
// nums consists of pairwise distinct positive integers.
// There doesn't exist two distinct indices, i and j, in the range [0, n - 1], such that nums[i] + nums[j] == target.
// Return the minimum possible sum that a beautiful array could have.
// Input: n = 2, target = 3
// Output: 4
// Explanation: We can see that nums = [1,3] is beautiful.
// - The array nums has length n = 2.
// - The array nums consists of pairwise distinct positive integers.
// - There doesn't exist two distinct indices, i and j, with nums[i] + nums[j] == 3.
// It can be proven that 4 is the minimum possible sum that a beautiful array could have.
// Example 2:

// Input: n = 3, target = 3
// Output: 8
// Explanation: We can see that nums = [1,3,4] is beautiful.
// - The array nums has length n = 3.
// - The array nums consists of pairwise distinct positive integers.
// - There doesn't exist two distinct indices, i and j, with nums[i] + nums[j] == 3.
// It can be proven that 8 is the minimum possible sum that a beautiful array could have.
long long minimumPossibleSum(int n, int target)
{
    long long ans = 0;
    set<int> s;
    int i = 1;
    while (s.size() < n)    
    {
        int temp = target - i;
        if (s.find(temp) == s.end())
        {
            s.insert(i);
            ans += i;
        }
    }
    return ans;
}
int main()
{
    int n = 16;
    int target = 6;
    cout << minimumPossibleSum(n, target);
}