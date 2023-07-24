#include <bits/stdc++.h>
using namespace std;
//     You are given an array 
// �
// =
// [
// �
// 1
// ,
// �
// 2
// ,
// …
// ,
// �
// �
// ]
// A=[A 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//  ] containing 
// �
// N integers.

// For a fixed parameter 
// �
// K (
// 1
// ≤
// �
// ≤
// �
// 1≤K≤N), consider the following process:

// You have a score, initially equal to 
// 0
// 0.
// There is a bucket, initially containing the elements 
// �
// 1
// ,
// �
// 2
// ,
// …
// ,
// �
// �
// −
// 1
// A 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// K−1
// ​
//  .
// For each 
// �
// i from 
// �
// K to 
// �
// N:
// Insert 
// �
// �
// A 
// i
// ​
//   into the bucket.
// Then, choose one element from the bucket, add it to your score, and remove it from the bucket.
// You'd like to maximize your score.
// For each 
// �
// =
// 1
// ,
// 2
// ,
// 3
// ,
// …
// ,
// �
// K=1,2,3,…,N, find the maximum possible score you can attain if you perform this process optimally with the parameter 
// �
// K.
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());
        long long ans=0;
        for(int i=0;i<n;i++){
           ans+=arr[i];
        }
        cout<<ans<<" ";
        for(int i=n-1;i>=1;i--){
            ans-=arr[i];
            cout<<ans<<" ";
        }
        cout<<endl;

    }
}