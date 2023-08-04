#include <bits/stdc++.h>
using namespace std;
// To begin with, let's learn how to reconstruct an array from its prefix sum array. This can be done by calculating the differences between adjacent elements.

// If the element n∗(n+1)/2
//  is missing from the array, we will add it and check if the array corresponds to some permutation.

// Otherwise, there is a missing element in the middle or at the beginning of the array.

// Let's count the occurrences of each difference between adjacent elements. Obviously, we should have one extra number and 2
//  missing numbers.

// If the count of differences occurring at least 2
//  times is at least 2
// , the answer is NO
// .

// The answer is also NO
//  if any difference occurs at least 3
//  times.

// Otherwise, we check that exactly 2
//  distinct numbers are missing, and their sum is equal to the only duplicate.
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> given(n - 1);
        vector<int> arr;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> given[i];
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        vector<vector<int>> ans;

        
    }
}