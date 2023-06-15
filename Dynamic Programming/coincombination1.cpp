#include <bits/stdc++.h>
using namespace std;
// Consider a money system consisting of n
//  coins. Each coin has a positive integer value.
//  Your task is to calculate the number of distinct ways you can produce a money sum x
//  using the available coins.

// For example, if the coins are {2,3,5}
//  and the desired sum is 9
// , there are 8
//  ways:
// 2+2+5

// 2+5+2

// 5+2+2

// 3+3+3

// 2+2+2+3

// 2+2+3+2

// 2+3+2+2

// 3+2+2+2

// Input

// The first input line has two integers n
//  and x
// : the number of coins and the desired sum of money.

// The second line has n
//  distinct integers c1,c2,…,cn
// : the value of each coin.

// Output

// Print one integer: the number of ways modulo 109+7
// .
int f(int ind, vector<int> v, int sum)
{
    // if (sum == 0)
    //     return 1;
    if (ind == 0)
        return (sum % v[0] == 0);
    int taken = 0, notTaken = 0;
    notTaken = f(ind - 1, v, sum);
    if (v[ind] <= sum)
        taken = f(ind, v, sum - v[ind]);
    return taken + notTaken;
}
int ways(vector<int> v, int sum)
{
    int n = v.size();

    return f(n - 1, v, sum);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << ways(v, x);
}