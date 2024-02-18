#include <bits/stdc++.h>
using namespace std;
bool checkPerfectSquare(int n)
{
    int x = sqrt(n);
    return x * x == n;
}
int MinSquares(int n)
{
    int sum = 0, count = 0;
    if (checkPerfectSquare(n))
    {
        return 1;
    }
    else
    {
        while (sum < n)
        {
            int x = sqrt(n - sum);
            sum += x * x;
            count++;
        }
        if (sum == n)
        {
            return count;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    cout << MinSquares(n);
    return 0;
}