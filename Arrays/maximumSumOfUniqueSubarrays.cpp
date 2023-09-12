#include <bits/stdc++.h>
using namespace std;
// You are given an integer array nums and two positive integers m and k.

// Return the maximum sum out of all almost unique subarrays of length k of nums. If no such subarray exists, return 0.

// A subarray of nums is almost unique if it contains at least m pairwise distinct elements.

// A subarray is a contiguous non-empty sequence of elements within an array.
long long maxSum(vector<int> &nums, int m, int k)
{

    int n = nums.size();
    long long maxiSum = 0;
    for (int i = 0; i < n - k + 1; i++)
    {
        unordered_map<long long, long long> mp;// we use map here because we want to store the frequency of the elements in the subarray 
        long long count = 0;
        for (int j = i; j < i + k; j++)
        {

            if (mp[nums[j]] == 0)// if the frequency of the element is 0 then we increase the count
                count++;
            mp[nums[j]]++;// we increase the frequency of the element if it is already present in the map
        }
        for(auto it:mp)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
        if (count >= m)
        {
            long long sum = 0;
            for (auto it : mp)
            {
                sum += it.first * it.second;
            }
            maxiSum = max(maxiSum, sum);
        }
    }
    return maxiSum;
}
int main() {}