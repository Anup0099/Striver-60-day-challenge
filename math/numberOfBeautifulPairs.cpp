#include <bits/stdc++.h>
using namespace std;
int firstDigit(int n)
{
    while (n >= 10)
    {
        n /= 10;
    }
    return n;
}
int lastDigit(int n)
{
    return n % 10;
}
int gcd(int a, int b)
{
    int mini = min(a, b);
    while (mini > 0)
    {
        if (a % mini == 0 && b % mini == 0)
        {
            return mini;
        }
    }

    return mini;
}
int countbeautifulpairs(vector<int> &nums)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int last = lastDigit(nums[i]);
            int first = firstDigit(nums[j]);
            if (gcd(first, last) == 1)
                ans++;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}