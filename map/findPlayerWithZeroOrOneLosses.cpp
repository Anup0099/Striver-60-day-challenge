#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> playerWithOneOrZeroLosses(vector<vector<int>> &matches)
{
    int n = matches.size();
    int m = matches[0].size();
    // we have to find the player with losses only
    unordered_map<int, int> lost, won;
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        won[matches[i][0]]++;
        lost[matches[i][1]]++;
    }
    vector<int> temp1;
    for (auto it : won)
    {
        if (lost.find(it.first) == lost.end())
        {
            temp1.push_back(it.first);
        }
    }

    ans.push_back(temp1);
    temp1.clear();
    for (auto it : lost)
    {
        if (it.second == 1)
        {
            temp1.push_back(it.first);
        }
    }
    ans.push_back(temp1);
    return ans;
}
bool uniqueOccurances(vector<int> &arr)
{
    unordered_map<int, int> mp;
    for (auto it : arr)
    {
        mp[it]++;
    }

    // traverse the map and check if the values are unique or not
    unordered_set<int> st;
    for (auto it : mp)
    {
        if (st.find(it.second) != st.end())
        {
            return false;
        }
        st.insert(it.second);
    }
    return true;
}
int main()
{
    vector<vector<int>> matches = {{2, 3}, {1, 3}, {5, 4}, {6, 4}};
    vector<vector<int>> ans = playerWithOneOrZeroLosses(matches);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}