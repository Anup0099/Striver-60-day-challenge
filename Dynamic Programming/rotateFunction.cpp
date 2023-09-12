#include <bits/stdc++.h>
using namespace std;
int maxRotateFunction(vector<int> &nums)
{
    int n = nums.size();
    int sum = 0;
    int prev = 0, curr = 0;
    int f0 = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        f0 += i * nums[i];
    }
    int maxval = f0;
    prev = f0;
    for (int i = 1; i < n; i++)
    {
        curr = prev + sum - n * nums[n - i];
        prev = curr;
        maxval = max(maxval, curr);
    }
    return maxval;
}
int main() {}