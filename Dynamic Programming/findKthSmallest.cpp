/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
long long findKthSmallest(vector<int> &coins, int k)
{
    int n = coins.size();
    long long ans = 0;
    vector<int> a;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int l = 1;
        for (int j = 0; j < k; j++)
        {
            s.insert(coins[j] * l);
            l++;
        }
    }
    for (auto it : s)
    {
        a.push_back(it);
    }
    return a[k - 1];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    cout << findKthSmallest(coins, k) << endl;
}