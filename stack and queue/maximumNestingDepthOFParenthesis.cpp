#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
int maxDepth(string s)
{
    int n = s.length();
    int ans = 0;
    int depth = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            ans++;
        }
        else if (s[i] == ')')
            ans--;
        depth = max(ans, depth);
    }
    return depth;
}
int main()
{
}