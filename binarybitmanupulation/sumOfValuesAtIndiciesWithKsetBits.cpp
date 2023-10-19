#include <bits/stdc++.h>
using namespace std;
// you are given 0 indexed array nums of length n and a integer k return an integer that denotes sum of elements in nums whose corrosponding indices have exactly k set bits in their binary representation
int count(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int sumIndicesWithkSetBits(vector<int> &nums, int k)
{
    // thole first count set bits in each index and store it in array then add accoring to count
    vector<int> countSetBits(nums.size(), 0);
    for (int i = 0; i < nums.size(); i++)
    {
        countSetBits[i] = count(i);
    }
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {

        if (countSetBits[i] == k)
        {
            sum += nums[i];
        }
    }
    return sum;
}
int main() {}