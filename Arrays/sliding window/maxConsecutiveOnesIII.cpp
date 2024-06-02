#include <bits/stdc++.h>
using namespace std;
int longestOnes(vector<int> &nums, int k)
{
    int n = nums.size();
    int i = 0, j = 0;
    int ans = 0;
    int shiftZeroes = 0;
    while (j < n)
    {
        if (nums[j] == 0)
        {
            shiftZeroes++;
        }

        while (shiftZeroes > k)
        {
            if (nums[i] == 0)
                shiftZeroes--;
            i++;
        }

        ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
}
int main() {}