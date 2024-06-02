#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
long long fib(long long n)
{
    long long ans = 0;
    long long prev1 = 1;
    long long prev2 = 1;
    while (prev1 <= n)
    {
        if (prev1 % 2 == 0)
        {
            ans += prev1;
        }
        long long temp = prev1 + prev2;
        prev1 = prev2;
        prev2 = temp;
    }
    return ans;
}
int main()
{
    long long n = 4000000;
    cout << fib(n) << endl;
    return 0;
}