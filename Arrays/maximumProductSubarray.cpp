#include <bits/stdc++.h> 
using namespace std;
int maxProductSubrray(vector<int>&nums)
{
    int prefix =1,suffix=1;
    int n= nums.size();
    int result =INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(nums[i])prefix=1;
        if(nums[n-i-1])suffix=1;

        prefix =prefix*nums[i];
        suffix = suffix*nums[n-i-1];
        result - max(result,max(prefix,suffix));
    }
    return result;
} 
int main() {} 