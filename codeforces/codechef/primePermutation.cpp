#include <bits/stdc++.h> 
using namespace std;
// Given an integer 
// �
// N, find a permutation 
// �
// P of length 
// �
// N, such that:

// ∣
// �
// �
// −
// �
// ∣
// ∣P 
// i
// ​
//  −i∣ is prime for all 
// 1
// ≤
// �
// ≤
// �
// 1≤i≤N.
// If multiple such permutations exist, print any.
// If no such permutation is possible, print 
// −
// 1
// −1 instead.

// Note:

// A permutation of length 
// �
// N contains all integers from 
// 1
// 1 to 
// �
// N exactly once.
// ∣
// �
// ∣
// ∣X∣ denotes the absolute value of 
// �
// X. For example, 
// ∣
// −
// 4
// ∣
// =
// 4
// ∣−4∣=4 and 
// ∣
// 7
// ∣
// =
// 7
// ∣7∣=7.
int main() {
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n==2)cout<<-1;

        if(n%2==0)
        {
            cout<<4;

        }
    }
} 