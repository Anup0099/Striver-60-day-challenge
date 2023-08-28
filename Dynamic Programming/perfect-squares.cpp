#include <bits/stdc++.h>
using namespace std;

int perfectSquares(int n)
{
    if (n == 0)
        return 0;
    int result = INT_MAX;
    for (int i = 1; i <= sqrt(n); i++)
    {
        int ans = 1 + perfectSquares(n - i * i);
        result = min(result, ans);
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << perfectSquares(12);
}