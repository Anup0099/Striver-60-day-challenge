#include <bits/stdc++.h>
using namespace std;

// given n children standing in a line each child is assigned a rating value given in array ratings i am giving candies to children each child must have one candy child with higher rating get more candies than their neighbors return minimum number of candies you need to have to distribute the candies to the children ratings [1,0,2] output will be 5 so first guy will get 2 candy second will get 1 candy and third will get 2 candies so total 5 candies example 2 will get [1,2,2] get 1,2,1 so total 4 candies
int candy(vector<int> &nums)
{
    int n=nums.size();
    // sort nahi kar sakte hai because we have to maintain the order of the array
    int ans=0;
    vector<int> left(n,1);
    vector<int> right(n,1);
    for(int i=1;i<n;i++)
    {
        if(nums[i]>nums[i-1])
        {
            left[i]=left[i-1]+1;
        }
    }
    for(int i=n-2;i>=0;i--)
    {
        if(nums[i]>nums[i+1])
        {
            right[i]=right[i+1]+1;
        }
    }
    for(int i=0;i<n;i++)
    {
        ans+=max(left[i],right[i]);
    }
    return ans;
}
int main() {}