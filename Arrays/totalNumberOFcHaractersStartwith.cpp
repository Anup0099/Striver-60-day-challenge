#include <bits/stdc++.h>
using namespace std;
long long countSubstrings(string s, char c)
{
    int n = s.length();
    long long count = 0;
    for (int i : s)
    {
        if (i == c)
        {
            count++;
        }
    }
    return count * (count + 1) / 2;
}
int main()
{
}