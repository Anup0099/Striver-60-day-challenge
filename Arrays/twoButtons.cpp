#include <bits/stdc++.h>
using namespace std;
// Vasya has found a strange device. On the front panel of a device there are: a red button, a blue button and a display showing some positive integer. After clicking the red button, device multiplies the displayed number by two. After clicking the blue button, device subtracts one from the number on the display. If at some point the number stops being positive, the device breaks down. The display can show arbitrarily large numbers. Initially, the display shows number n.

// Bob wants to get number m on the display. What minimum number of clicks he has to make in order to achieve this result?

void solve(int n, int m, int ans)
{
    if (n == m)
    {
        cout << ans << endl;
        return;
    }
    if (n > m)
    {
        cout << n - m + ans << endl;
        return;
    }
    if (m % 2 == 0)
    {
        solve(n, m / 2, ans + 1);
    }
    else
    {
        solve(n, m + 1, ans + 1);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int ans = 0;

    solve(n, m, ans);
}