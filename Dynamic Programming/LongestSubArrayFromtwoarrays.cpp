#include <bits/stdc++.h> 
using namespace std;
int solve(vector<int>&nums1,vector<int>&nums2,int i,int j,vector<vector<int>>&dp){
    int n=nums1.size();
    int m= nums2.size();
    if(i>=n || j>=m)return 0;
    int pick1=0,pick2=0,notpick=0;
    if(dp[i][j]!=-1)return dp[i][j];
    if(j==1){
        if(nums1[i]>=nums1[i-1]){
            pick1=1+solve(nums1,nums2,1,j+1,dp);

        if(nums2[i]>=nums1[i-1]){
            pick2=1+solve(nums1,nums2,2,j+1,dp);
        }

        if(nums1[i]<nums2[i-1] && nums2[i]<nums1[i-1] ){
            return 0;

        }


    }else if(j==2){
        // if current element is greater than prevous element of second array than we can pick it
        if(nums1[i]>=nums2[i-1]){
            pick1=1+solve(nums1,nums2,2,j+1,dp);
        }

        // if current element is greater than prevous element of first array than we can pick it
        if(nums2[i]>=nums1[i-1]){
            pick2=1+solve(nums1,nums2,1,j+1,dp);
        }

        // if current element is less than prevous element of both array than we can't pick it
        if(nums1[i]<nums2[i-1] && nums2[i]<nums1[i-1])return 0;

    }else if(j==0){


        // if pick =1 picking from the first array 
        pick1= 1+solve(nums1,nums2,1,j+1,dp);
        pick2= 1+solve(nums1,nums2,2,j+1,dp);
        notpick=solve(nums1,nums2,0,j+1,dp);


    }
    return dp[i][j]=max({pick1,pick2,notpick});
}
int maxNonDecresingLength(vector<int>&nums1,vector<int>&nums2){
    int n=nums1.size();
    int m=nums2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    return solve(nums1,nums2,0,0,dp);
}
int main() {} 