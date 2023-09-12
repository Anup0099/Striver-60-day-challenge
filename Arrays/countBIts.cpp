#include <bits/stdc++.h>
using namespace std;
int count(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
vector<int> countBits(int n)
{
    vector<int> ans;
    for (int i = 0; i <= n; i++)
    {
        // built in function to count set bits in a number in O(1) time
        ans.push_back(__builtin_popcount(i));
    }
    return ans;
}
int main() {}