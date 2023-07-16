#include <bits/stdc++.h>
using namespace std;
vector<int> remove(vector<int> &nums)
{
    int n = nums.size();
    // two pointer approach
    int i = 0, j = 1;
    while (j < n)
    {
        if (nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j];
        }
        j++;
    }
    return nums;
}
int main() {}