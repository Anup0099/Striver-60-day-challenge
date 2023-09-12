#include <bits/stdc++.h>
using namespace std;
// Young Timofey has a birthday today! He got kit of n cubes as a birthday present from his parents. Every cube has a number ai, which is written on it. Timofey put all the cubes in a row and went to unpack other presents.

// In this time, Timofey's elder brother, Dima reordered the cubes using the following rule. Suppose the cubes are numbered from 1 to n in their order. Dima performs several steps, on step i he reverses the segment of cubes from i-th to (n - i + 1)-th. He does this while i ≤ n - i + 1.

// After performing the operations Dima went away, being very proud of himself. When Timofey returned to his cubes, he understood that their order was changed. Help Timofey as fast as you can and save the holiday — restore the initial order of the cubes using information of their current location.

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i <= n - i - 1; i++)// i <= n - i - 1 because we are reversing the segment from i to n - i - 1
    {
        if (i % 2 - 1)// if i is odd then reverse the segment
        //why i%2-1 because if i is odd then i%2 will be 1 and 1-1 = 0 which is false and if i is even then i%2 will be 0 and 0-1 = -1 which is true
        {
            swap(v[i], v[n - i - 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}