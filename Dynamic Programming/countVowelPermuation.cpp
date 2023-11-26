#include <bits/stdc++.h>
using namespace std;
int solve(char ch, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (ch == 'a')
    {
        return solve('e', n - 1);
    }
    else if (ch == 'e')
    {
        return solve('a', n - 1) + solve('i', n - 1);
    }
    else if (ch == 'i')
    {
        return solve('a', n - 1) + solve('e', n - 1) + solve('o', n - 1) + solve('u', n - 1);
    }
    else if (ch == 'o')
    {
        return solve('i', n - 1) + solve('u', n - 1);
    }
    else if (ch == 'u')
    {
        return solve('a', n - 1);
    }
}
int countVowelPermutation(int n)
{
    int result = 0;

    result += solve('a', n - 1) % 1000000007;
    result += solve('e', n - 1) % 1000000007;
    result += solve('i', n - 1) % 1000000007;
    result += solve('o', n - 1) % 1000000007;
    result += solve('u', n - 1) % 1000000007;
    return result;
}
int main() {}