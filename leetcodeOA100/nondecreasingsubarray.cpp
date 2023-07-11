#include <bits/stdc++.h>
using namespace std;
// You are given two 0-indexed integer arrays nums1 and nums2 of length n.

// Let's define another 0-indexed integer array, nums3, of length n. For each index i in the range [0, n - 1], you can assign either nums1[i] or nums2[i] to nums3[i].

// Your task is to maximize the length of the longest non-decreasing subarray in nums3 by choosing its values optimally.

// Return an integer representing the length of the longest non-decreasing subarray in nums3.

// Note: A subarray is a contiguous non-empty sequence of elements within an array.
int maxNonDecreasingLength(vector<int>& nums1, vector<int>& nums2) {
   int n=nums1.size();
   int m=nums2.size();
   vector<int>nums3(n);
    for(int i=0;i<n;i++){
         nums3[i]=max(nums1[i],nums2[i]);
    }
    int ans=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(nums3[i]>=nums3[i-1]){
            count++;
        }
        else{
            ans=max(ans,count);
            count=1;
        }
    }
    ans=max(ans,count);
    return ans;
        
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int>nums1={1,1};
    vector<int>nums2={2,2};
    cout<<maxNonDecreasingLength(nums1,nums2);
}