#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &nums, int k)
{
    int n = nums.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < k)
        {
            ans++;
        }
    }
    return ans;
}
int main() {}