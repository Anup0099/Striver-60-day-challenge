#include <bits/stdc++.h>
using namespace std;
int maximumOfSubarray(vector<int> &nums, int k)
{
    int i = k, j = k;
    int res = nums[k], currentMin = nums[k];
    int n = numze();
    int left = 0, right = 0;
    while (i > 0 || j < n - 1)
    {
        left = (i > 0) ? nums[i] : 0;
        right = (j < n - 1) ? nums[j] : 0;
        if (left > right)
        {
            currentMin = min(currentMin, left);
            i--;
        }
        else
        {
            currentMin = min(currentMin, right);
            j++;
        }
        result = max(result, currentMin * (j - i + 1));
    }
    return result;
}
int main() {}