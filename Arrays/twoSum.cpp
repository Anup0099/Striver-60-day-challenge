#include <bits/stdc++.h>
using namespace std;
int findPairs(vector<int> nums, int k)
{
    int n = nums.size();
    int ans = 0;
    int count = 0;
    int j = 0, i = 0;
    int sum = 0;
    while (j < n)
    {
        sum += nums[j];
        count++;
        if (count == 2)
        {
            if (sum == k)
            {
                i = j;
                sum = 0;
                count = 0;
                ans++;
            }
            else
            {
                i = j;
                sum = 0;
                count = 0;
            }
        }
        j++;
    }
    return ans;

}
int main() {
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    
}