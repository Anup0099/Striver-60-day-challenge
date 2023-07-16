#include <bits/stdc++.h>
using namespace std;
void subsequence(vector<int> &arr, int ind,vector<int>&ans)
{
    //base case yeh hai ki agar index arr.size() se bada ho jaye toh hume ans print karna hai
    // isme dp nahi kaga sakte kyuki har call ke liye alag alag ans hai
    if (ind >= arr.size())
    {
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    ans.push_back(arr[ind]);
    subsequence(arr, ind + 1,ans);
    ans.pop_back();
    subsequence(arr, ind + 1,ans);
}
// print subsequennce whose sum is k
void printSubsequence(vector<int>&arr,int k,int ind,int sum,vector<int>&ans){
    if(ind>=arr.size()){
        if(sum==k){
            for(auto it:ans){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
    ans.push_back(arr[ind]);
    sum+=arr[ind];
    printSubsequence(arr,k,ind+1,sum+arr[ind],ans);
    ans.pop_back();
    sum-=arr[ind];
    printSubsequence(arr,k,ind+1,sum,ans);
}
int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> ans;
    subsequence(arr, 0,ans);
    return 0;
}