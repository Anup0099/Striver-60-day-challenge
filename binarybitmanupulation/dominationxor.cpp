#include <bits/stdc++.h> 
using namespace std;
// for an array of n positive integers count the unordered pairs (i,j) (0<i,j<n)
// where arr[i] XOR arr[j]> arr[i] And arr[j].XOR denotes the bitwise XOR operation.and And denotes the bitwise AND operation.

// Input Format
// First line contains an integer n.
// Second line contains n space separated integers denoting the array elements.
int main() {
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
} 