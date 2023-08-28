#include <bits/stdc++.h>
using namespace std;
bool solve(int n, int curr)
{
    if (curr == n)
    {
        cout << curr << " ";
        return true;
    }
    if (curr > n)
    {
        cout << curr << " ";
        return false;
    }
    bool a = solve(n, curr * 10);
    bool b = solve(n, curr * 20);
    return a || b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int curr = 1;
    cout << solve(n, curr);
}