#include <bits/stdc++.h> 
using namespace std;
int solve(vector<int>&arr,int difference,int i){
    int n= arr.size();
    int result=0;
    for(int j=i+1;j<n;j++){
        int prev= arr[i];
        int curr=arr[j];
        if(curr-prev==difference){
            result= max(result,1+solve(arr,difference,j));
        }
    }
    return result;
}
int longestArithmaticSubsequence(vector<int>&arr,int difference){
    int n= arr.size();
    int result=0;
    // recursive approach
    // int result=0;
    // for(int i=0;i<n;i++){
    //     result= max(result,1+solve(arr,difference,i+1));
    // }
    // return result;
    // // optimal approach using map

    map<int,int>mp;
    for(int i=0;i<n;i++){
        int curr=arr[i];
        int prev=curr-difference;
        int prev_length=mp[prev];
        int curr_length= prev_length+1;
        mp[curr]=curr_length;
        result= max(result,arr[i]);
    }
    return result;


} 
int main() {} 