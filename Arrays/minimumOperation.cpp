#include <bits/stdc++.h>
using namespace std;
// You are given an array nums of positive integers and an integer k.

// In one operation, you can remove the last element of the array and add it to your collection.

// Return the minimum number of operations needed to collect elements 1, 2, ..., k.

int minOperations(vector<int> &nums, int k)
{
    int n = nums.size();
    set<int> s;
    int moves = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        moves++;
        if (nums[i] <= k)
        {
            s.insert(nums[i]);
        }
        else if (s.size() == k)
        {
            return moves;
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {3, 1, 5, 3, 1};
    int k = 3;
    cout << minOperations(nums, k);
    return 0;
}