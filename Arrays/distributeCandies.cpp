#include <bits/stdc++.h>
using namespace std;
long long distributecandies(int n, int limit)
{
    long long ans = 0;
    for (int i = 0; i < min(n, limit); i++)
    {
        int rem = n - i;
        if (rem > 2 * limit)
            continue;
        int mx = min(rem, limit);
        rem = rem - mx;
        int m = mx - rem + 1;
        ans += max(0, m);
        // for (int j = 0; j < min(n - i, limit); j++)
        // {
        //     int k = n - i - j;
        //     if (k <= limit)
        //     {
        //         ans++;
        //     }
        // }
    }
    return ans;
}
int main() {}