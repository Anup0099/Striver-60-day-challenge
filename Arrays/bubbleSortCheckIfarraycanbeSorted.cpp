#include <bits/stdc++.h>
using namespace std;

bool checkIfArrayIfIsSorted(vector<int> &nums)
{
    int n = nums.size();
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (__builtin_popcount(nums[j]) == __builtin_popcount(nums[j + 1]))
            {

                if (nums[j] > nums[j + 1])
                {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
    }
    vector<int> temp = nums;
    sort(temp.begin(), temp.end());
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != temp[i])
        {
            return false;
        }
    }
    return true;
}
int main() {}