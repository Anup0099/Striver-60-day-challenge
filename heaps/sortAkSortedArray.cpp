#include <bits/stdc++.h>
using namespace std;
vector<int> sortKsortedArray(vector<int> &v, int k)
{
    int n = v.size();
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        pq.push(v[i]);
        if (pq.size() > k)
        {
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while (!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v = {6, 5, 3, 2, 8, 10, 9};
    int k = 3;
    vector<int> ans = sortKsortedArray(v, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

}