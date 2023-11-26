#include <bits/stdc++.h>
using namespace std;
// You are given a 0-indexed integer array nums. A pair of integers x and y is called a strong pair if it satisfies the condition:

// |x - y| <= min(x, y)
// You need to select two integers from nums such that they form a strong pair and their bitwise XOR is the maximum among all strong pairs in the array.

// Return the maximum XOR value out of all possible strong pairs in the array nums.

// Note that you can pick the same integer twice to form a pair.
int maximumStrongPiar(vector<int> &nums)
{
    int n = nums.size();
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int x = nums[i];
            int y = nums[j];

            if (abs(x - y) <= min(x, y))
            {
                maxi = max(maxi, x ^ y);
            }
        }
    }
    return maxi;
}
int main() {}