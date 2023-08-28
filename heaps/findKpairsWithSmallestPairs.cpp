#include <bits/stdc++.h>
using namespace std;
typedef pair<int, pair<int, int>> p;
vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k)
{
    int n = nums1.size();
    int m = nums2.size();
    vector<vector<int>> ans;
    priority_queue<p, vector<p>, greater<p>> pq;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int sum = nums1[i] + nums2[j];

            if (pq.size() < k)
            {
                pq.push({sum, {nums1[i], nums2[j]}});
            }
            else if (pq.top().first > sum)
            {
                pq.pop();
                pq.push({sum, {nums1[i], nums2[j]}});
            }
            else
            {
                break;
            }
        }
    }
    vector<vector<int>> result;
    while (!pq.empty())
    {
        result.push_back({pq.top().second.first, pq.top().second.second});
    }
    return result;
}
int main() {}