/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
vector<string> relativeRanks(vector<int> &score)
{
    int n = score.size();
    vector<int> res = score;
    sort(res.begin(), res.end(), greater<int>());
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[res[i]] = i + 1;
    }
    vector<string> scores(n);
    for (int i = 0; i < n; i++)
    {
        if (mp[score[i]] == 1)
        {
            scores[i] = "Gold Medal";
        }
        else if (mp[score[i]] == 2)
        {
            scores[i] = "Silver Medal";
        }
        else if (mp[score[i]] == 3)
        {
            scores[i] = "Bronze Medal";
        }
        else
        {
            scores[i] = to_string(mp[score[i]]);
        }
    }
    return scores;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}