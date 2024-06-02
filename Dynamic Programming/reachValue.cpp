#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
// int solve(long long target, long long i)
// {
//     if (i == target)
//         return 1;
//     else if (i > target)
//         return 0;
//     else if (i < target)
//     {
//         int a = solve(target, i * 10);
//         int b = solve(target, i * 20);
//         return a || b;
//     }

//     return 0;
// }
bool solve(long long n, long long &curr)
{
    if (curr > n)
    {
        return false;
    }
    if (curr == n)
        return true;
    curr = curr * 10;
    bool ans = false;
    ans |= solve(n, curr);
    curr = curr / 10;
    curr = curr * 20;
    ans |= solve(n, curr);
    curr = curr / 20;
    return ans;
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