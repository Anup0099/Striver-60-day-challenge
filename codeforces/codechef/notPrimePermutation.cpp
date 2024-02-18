#include <bits/stdc++.h>
using namespace std;
// You are given a permutation
// �
// P of the integers
// {
// 1
// ,
// 2
// ,
// 3
// ,
// …
// �
// }
// {1,2,3,…N}.

// Find any permutation
// �
// A of
// {
// 1
// ,
// 2
// ,
// …
// ,
// �
// }
// {1,2,…,N} such that, for every index
// �
// i (
// 1
// ≤
// �
// ≤
// �
// 1≤i≤N),
// �
// �
// +
// �
// �
// A
// i
// ​
//  +P
// i
// ​
//   is not a prime number.
// If no such permutation
// �
// A exists, print
// −
// 1
// −1 instead.

// Note: A permutation of
// {
// 1
// ,
// 2
// ,
// …
// ,
// �
// }
// {1,2,…,N} is an array of length
// �
// N that contains every integer from
// 1
// 1 to
// �
// N exactly once.

// Input Format
// The first line of input will contain a single integer
// �
// T, denoting the number of test cases.
// Each test case consists of two lines of input.
// The first line of each test case contains a single integer
// �
// N, the length of the permutation
// �
// P.
// The second line contains
// �
// N space-separated integers
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
// P
// 1
// ​
//  ,P
// 2
// ​
//  ,…,P
// N
// ​
//  .
// Output Format
// For each test case, output
// �
// N space-separated integers
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
// A
// 1
// ​
//  ,A
// 2
// ​
//  ,…,A
// N
// ​
//   representing the permutation you found.
// If no such
// �
// A exists, print
// −
// 1
// −1 instead.

// If there are multiple possible solutions, you may print any of them.

// Constraints
// 1
// ≤
// �
// ≤
// 1
// 0
// 5
// 1≤T≤10
// 5

// 1
// ≤
// �
// ≤
// 2
// ⋅
// 1
// 0
// 5
// 1≤N≤2⋅10
// 5

// �
// P will be a permutation of
// {
// 1
// ,
// 2
// ,
// …
// ,
// �
// }
// {1,2,…,N}
// The sum of
// �
// N across all tests won't exceed
// 4
// ⋅
// 1
// 0
// 5
// 4⋅10
// 5
//  .
// Sample 1:
// Input
// Output
// 4
// 1
// 1
// 2
// 2 1
// 5
// 2 5 1 3 4
// 6
// 6 3 1 5 2 4
// -1
// -1
// 4 1 5 3 2
// 3 6 5 1 4 2
// Explanation:
// Test case
// 1
// 1: The only choice is
// �
// =
// [
// 1
// ]
// A=[1], which doesn't work because
// �
// 1
// +
// �
// 1
// =
// 1
// +
// 1
// =
// 2
// A
// 1
// ​
//  +P
// 1
// ​
//  =1+1=2 is a prime.

// Test case
// 2
// 2: There are two choices:
// �
// =
// [
// 1
// ,
// 2
// ]
// A=[1,2] and
// �
// =
// [
// 2
// ,
// 1
// ]
// A=[2,1]. It can be verified that neither of them work (either
// 2
// 2 or
// 3
// 3 will appear as a sum).

// Test case
// 3
// 3: We have
// �
// =
// [
// 2
// ,
// 5
// ,
// 1
// ,
// 3
// ,
// 4
// ]
// P=[2,5,1,3,4]. Let
// �
// =
// [
// 4
// ,
// 1
// ,
// 5
// ,
// 3
// ,
// 2
// ]
// A=[4,1,5,3,2], then it can be seen that
// �
// �
// +
// �
// �
// =
// 6
// A
// i
// ​
//  +P
// i
// ​
//  =6 for every
// �
// i; and
// 6
// 6 is not a prime.

// Test case
// 4
// 4: For
// �
// =
// [
// 6
// ,
// 3
// ,
// 1
// ,
// 5
// ,
// 2
// ,
// 4
// ]
// P=[6,3,1,5,2,4] and
// �
// =
// [
// 3
// ,
// 6
// ,
// 5
// ,
// 1
// ,
// 4
// ,
// 2
// ]
// A=[3,6,5,1,4,2], the
// �
// �
// +
// �
// �
// A
// i
// ​
//  +P
// i
// ​
//   values are
// [
// 9
// ,
// 9
// ,
// 6
// ,
// 6
// ,
// 6
// ,
// 6
// ]
// [9,9,6,6,6,6] — none of which are prime.
bool check(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int sum(int &a, int &b)
{
    a = 2344;
    b = 234;
    int sum = a + b;
    return sum;
}
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int n;
    //     cin >> n;
    //     vector<int> p(n);
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> p[i];
    //     }
    //     // vector<int> ans(n);
    //     // vector<int> visited(n + 1, 0);
    //     // for (int i = 0; i < n; i++)
    //     // {
    //     //     for (int j = 0; j < n; j++)
    //     //     {
    //     //         if (!check(p[i] + p[j]) and !visited[p[j]])
    //     //         {
    //     //             ans[i] = p[j];
    //     //             visited[p[j]] = 1;
    //     //             break;
    //     //         }
    //     //     }
    //     // }
    //     // // if arr contains 0 then return -1
    //     // if (find(ans.begin(), ans.end(), 0) != ans.end())
    //     // {
    //     //     cout << -1 << endl;
    //     //     continue;
    //     // }
    //     // for (int i = 0; i < n; i++)
    //     // {
    //     //     cout << ans[i] << " ";
    //     // }
    //     // cout << endl;
    //     vector<int> ans(n);
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (!check(p[i] + p[i]))
    //         {
    //             ans[i] = p[i];
    //         }
    //         else
    //         {
    //             // unique element

    //             for (int j = 0; j < n; j++)
    //             {
    //                 if (!check(p[i] + p[j]) and p[i] != p[j])
    //                 {
    //                     ans[i] = p[j];
    //                     // change that element to some other value
    //                     ans[j] = p[i];
    //                     break;
    //                 }
    //             }
    //         }
    //     }
    //     if (find(ans.begin(), ans.end(), 0) != ans.end())
    //     {
    //         cout << -1 << endl;
    //         continue;
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << ans[i] << " ";
    //     }
    //     cout << endl;

    int a = 23;
    int b = 2;
    cout << sum(a, b);
}