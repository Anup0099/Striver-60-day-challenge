#include <bits/stdc++.h> 
using namespace std; 
vector<vector<int>>findCombination(vector<int>&arr,int ind ,int target,vector<vector<int>>&ans,vector<int>&ds){
    if(ind>=arr.size()){
        if(target==0){
            ans.push_back(ds);
            
        }
        return;
    }
    // take step
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        findCombination(arr,ind,target-arr[ind],ans,ds);
        ds.pop_back();
    }
    // not take step
    findCombination(arr,ind+1,target,ans,ds);
    return ans;
}
// combination sum 2
void findCombination(vector<int>&arr,int target,vector<vector<int>>ans,vector<int>&ds,int ind){
    sort(arr.begin(),arr.end());
    if(ind>=arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
    for(int i=ind;i<arr.size();i++){
        if(i>ind && arr[i]==arr[i-1])continue;
        if(arr[i]>target)break;
        ds.push_back(arr[i]);
        findCombination(arr,target-arr[i],ans,ds,i+1);
        ds.pop_back();
    }
    // not take step
    findCombination(arr,target,ans,ds,ind+1);
}
int main() {} 