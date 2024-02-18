#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int solve(long long target, long long i)
{
    if (i == target)
        return 1;
    else if (i > target)
        return 0;
    else if (i < target)
    {
        int a = solve(target, i * 10);
        int b = solve(target, i * 20);
        return max(a, b);
    }
    // int a = solve(target / 10, i * 10);
    // int b = solve(target / 20, i * 20);
    // return max(a, b);
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {

        long long target;
        cin >> target;
        long long i = 1;
        if (solve(target, i))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}