#include <bits/stdc++.h>
using namespace std;
// Aca and Milovan, two fellow competitive programmers, decided to give Vasilije a problem to test his skills.

// Vasilije is given three positive integers: n
// , k
// , and x
// , and he has to determine if he can choose k
//  distinct integers between 1
//  and n
// , such that their sum is equal to x
// .

// Since Vasilije is now in the weirdest city in Serbia where Aca and Milovan live, Cacak, the problem seems weird to him. So he needs your help with this problem.

// Input
// The first line contains a single integer t
//  (1≤t≤104
// ) — the number of test cases.

// The only line of each test case contains three integers n
// , k
//  and x
//  (1≤n≤2⋅105
// , 1≤k≤n
// , 1≤x≤4⋅1010
// ) — the maximum element he can choose, the number of elements he can choose and the sum he has to reach.

// Note that the sum of n
//  over all test cases may exceed 2⋅105
// .

// Output
// For each test case output one line: "YES", if it is possible to choose k
//  distinct integers between 1
//  and n
// , such that their sum is equal to x
// , and "NO", if it isn't.

// You can output the answer in any case (for example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as a positive answer)
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;

        long long sum1 = k * (k + 1) / 2;
        long long sum2 = (k * (2 * n - k + 1)) / 2;
        if (x >= sum1 && x <= sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}