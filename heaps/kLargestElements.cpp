#include <bits/stdc++.h>
using namespace std;
vector<int> klargestElelment(vector<int> arr, int k)
{
    int n = arr.size();
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
            pq.pop();
    }
    vector<int> ans;
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
    vector<int> arr = {3, 2, 1, 5, 6, 4};
    int k = 2;
    vector<int> ans = klargestElelment(arr, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}