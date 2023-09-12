#include <bits/stdc++.h>
using namespace std;
bool solve(vector<int> &stones, int index, int k, int n)
{
    if (index == n - 1)
    {
        return true;
    }
    unordered_map<int, int> mp;
    for (int i = index + 1; i < n; i++)
    {
        int gap = stones[i] - stones[index];
        if (gap >= k - 1 && gap <= k + 1)
        {
            if (mp.find(gap) == mp.end())
            {
                mp[gap] = 1;
                if (solve(stones, i, gap, n))
                {
                    return true;
                }
            }
        }
    }
    return false;
}

bool canCross(vector<int> &stones)
{
    int n = stones.size();
    return solve(stones, 0, 0, n);
}

int main()
{
    vector<int> stones = {0, 1, 3, 5, 6, 8, 12, 17};
    cout << canCross(stones);
}