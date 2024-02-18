#include <bits/stdc++.h>
using namespace std;
// You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. Each integer appears exactly once except a which appears twice and b which is missing. The task is to find the repeating and missing numbers a and b.

// Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.
vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
{
    int n = grid.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans.push_back(grid[i][j]);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    sort(ans.begin(), ans.end());
    int a = 0, b = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] == ans[i + 1])
        {
            a = ans[i];
            break;
        }
    }

    set<int> s;
    for (int i = 0; i < ans.size(); i++)
    {

        s.insert(ans[i]);
    }
    vector<int> v(s.begin(), s.end());
    int sum = ans.size() * (ans.size() + 1) / 2;
    int sum1 = accumulate(v.begin(), v.end(), 0);
    b = sum - sum1;
    vector<int> res;

    res.push_back(a);
    res.push_back(b);
    return res;
}

int main()
{
    vector<vector<int>> grid = {
        {1, 1},
        {3, 2},
    };
    vector<int> ans = findMissingAndRepeatedValues(grid);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}