#include <bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int i=0,j=0;
    int ans=INT_MIN;
    while(j<nums.size())
    {
        if(nums[j]==0)
        {
            i=j+1;
        }
        ans=max(ans,j-i+1);
        j++;
    }
    return ans;
}
int main() {}