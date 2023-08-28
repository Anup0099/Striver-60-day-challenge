#include <bits/stdc++.h>
using namespace std;
// You are given two integers, n and k.

// An array of distinct positive integers is called a k-avoiding array if there does not exist any pair of distinct elements that sum to k.

// Return the minimum possible sum of a k-avoiding array of length n.
int minimumSUm(int n, int k)
{
    int ans = 0;
    unordered_set<int> s;
    for (int i = 1; s.size() < n; i++)
    {
        if (s.find(k - i) == s.end())
        {
            s.insert(i);
            ans += i;
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