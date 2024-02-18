#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findWinners(vector<vector<int>> &matches)
{
    int n = matches.size();
    int m = matches[0].size();
    vector<vector<int>> ans;
    vector<int> winner, lostOne;
    unordered_map<int, int> mp1;
    for (int i = 0; i < n; i++)
    {
        mp1[matches[i][1]]++;
    }
    for (auto it : matches)
    {
        if (mp1.find(it[0]) == mp1.end())
        {
            winner.push_back(it[0]);
        }
    }
    for (auto it : mp1)
    {
        if (it.second == 1)
        {
            lostOne.push_back(it.first);
        }
    }

    sort(winner.begin(), winner.end());
    sort(lostOne.begin(), lostOne.end());
    // remove duplicates from winner
    winner.erase(unique(winner.begin(), winner.end()), winner.end());
    ans.push_back(winner);
    ans.push_back(lostOne);
    return ans;
}
// convert the above code in pyhton
// def findWinners(matches):
//     n = len(matches)
//     m = len(matches[0])
//     winner = []
//     lostOne = []
//     mp1 = {}
//     for i in range(n):
//         if matches[i][1] not in mp1:
//             mp1[matches[i][1]] = 1
//         else:
//             mp1[matches[i][1]] += 1
//     for it in matches:
//         if it[0] not in mp1:
//             winner.append(it[0])
//     for it in mp1:
//         if mp1[it] == 1:
//             lostOne.append(it)
//     winner.sort()
//     lostOne.sort()
//     return [winner, lostOne]
int main() {}