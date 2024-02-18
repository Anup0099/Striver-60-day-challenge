#include <bits/stdc++.h>
using namespace std;
int solve(int n, int x)
{
    int count = 0;
    while (n > 0)
    {
        int temp = n % 10;
        if (temp == x)
        {
            count++;
        }
        n = n / 10;
    }
    return count;
}
int countX(int L, int R, int X)
{
    int ans = 0;
    for (int i = L + 1; i < R; i++)
    {
        ans += solve(i, X);
    }
    return ans;
}
int main()
{
    int l = 10, r = 19, x = 1;
    cout << countX(l, r, x);
}