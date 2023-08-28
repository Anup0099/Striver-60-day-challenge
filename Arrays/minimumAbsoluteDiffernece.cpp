#include <bits/stdc++.h>
using namespace std;

// You are given a 0-indexed integer array nums and an integer x.

// Find the minimum absolute difference between two elements in the array that are at least x indices apart.

// In other words, find two indices i and j such that abs(i - j) >= x and abs(nums[i] - nums[j]) is minimized.

// Return an integer denoting the minimum absolute difference between two elements that are at least x indices apart.

int main()
{
    unsigned int n=-1;
    int b=-4;
    // here n is unsigned int so it will be converted to unsigned int 
    // and then added to b
    // so the output will be 4294967291 this is because of overflow of unsigned int 
    cout<<n+b;
}