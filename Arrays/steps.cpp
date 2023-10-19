#include <bits/stdc++.h>
using namespace std;
// there are N satirs and you have to reach the Nth stair find how many total possible ways to react on the Nth stair if you can either make a jump of 1,2,3 steps
// 1 1 1 1 1
// 1 1 1 2
long countWays(int n)
{
//   space optimization 
    long a = 1, b = 1, c = 2;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    for (int i = 3; i <= n; i++)
    {
        long temp = a + b + c;
        a = b;
        b = c;
        c = temp;
    }
    return c;
}

int main()
{
    int n = 3;
    cout << countWays(n);
    return 0;
}