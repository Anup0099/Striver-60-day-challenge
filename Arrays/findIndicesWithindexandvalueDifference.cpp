#include <bits/stdc++.h>
using namespace std;
// you are given 0 indexed integer array nums having length n an integer indexDifference and an integer valueDifference. find two index i and j both in range 0-n-1 such that abs(i-j)>=indexDifference and abs(nums[i]-nums[j])>=valueDifference. return true if there are two such indices otherwise return false
vector<int> findIndices(vector<int> &nums, int indexDifference, int valueDifference)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(i - j) >= indexDifference && abs(nums[i] - nums[j]) >= valueDifference)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}
int main() {}