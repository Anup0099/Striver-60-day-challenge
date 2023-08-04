#include <bits/stdc++.h>
using namespace std;
// You have an array of integers a
//  of length n
// . You can apply the following operation to the given array:

// Swap two elements ai
//  and aj
//  such that i≠j
// , ai
//  and aj
//  are either both even or both odd.
// Determine whether it is possible to sort the array in non-decreasing order by performing the operation any number of times (possibly zero).

// For example, let a
//  = [7,10,1,3,2
// ]. Then we can perform 3
//  operations to sort the array:

// Swap a3=1
//  and a1=7
// , since 1
//  and 7
//  are odd. We get a
//  = [1,10,7,3,2
// ];
// Swap a2=10
//  and a5=2
// , since 10
//  and 2
//  are even. We get a
//  = [1,2,7,3,10
// ];
// Swap a4=3
//  and a3=7
// , since 3
//  and 7
//  are odd. We get a
//  = [1,2,3,7,10
// ].
// Input
// The first line of input data contains a single integer t
//  (1≤t≤104
// ) — the number of test cases.

// The description of the test cases follows.

// The first line of each test case contains one integer n
//  (1≤n≤2⋅105
// ) — the length of array a
// .

// The second line of each test case contains exactly n
//  positive integers a1,a2,…,an
//  (1≤ai≤109
// ) — the elements of array a
// .

// It is guaranteed that the sum of n
//  over all test cases does not exceed 2⋅105
// .
bool check(int a, int b)
{
    if (a % 2 == 0 && b % 2 == 0)
    {
        return true;
    }
    else if (a % 2 != 0 && b % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            v2.push_back(v[i]);
        }
        sort(v.begin(), v.end());
        int flag = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (check(v[i], v2[i]))
            {
                count++;
            }
        }
        if (count == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO"
                 << " " << endl;
        }
    }
}