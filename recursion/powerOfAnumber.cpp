#include <bits/stdc++.h>
using namespace std;
long long power(int n, int r)
{
    if (r == 0)
        return 1;
    return (n * power(n, r - 1)) % 1000000007;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}