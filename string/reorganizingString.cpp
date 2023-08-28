#include <bits/stdc++.h>
using namespace std;
string reorganizeString(string s)
{
    int n = s.size();
    vector<int> v(26, 0);
    for (int i = 0; i < n; i++)
    {
        v[s[i] - 'a']++;
        if (v[s[i] - 'a'] > (n + 1) / 2)
            return "";
    }
    priority_queue<pair<int, char>> pq;
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (v[i - 'a'] > 0)
        {
            pq.push({v[i - 'a'], i});
        }
    }
    string ans = "";
    while (pq.size() > 2)
    {
        auto p1 = pq.top();
        pq.pop();
        auto p2 = pq.top();
        pq.pop();
        ans += p1.second;
        ans += p2.second;
        p1.first--;
        p2.first--;
        if (p1.first > 0)
            pq.push(p1);
        if (p2.first > 0)
            pq.push(p2);
        if (!pq.empty())
        {
            ans += pq.top().second;
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