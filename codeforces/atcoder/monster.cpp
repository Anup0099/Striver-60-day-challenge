#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long n, k;
        cin >> n >> k;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> ans;
        vector<pair<int, int>> dex;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % k == 0)
            {
                ans.push_back(i + 1);
            }
            else
            {
                dex.push_back({arr[i] % k, i + 1});
            }
        }
        sort(dex.begin(), dex.end(), [&](pair<int, int> a, pair<int, int> b)
             {
            if(a.first == b.first)
            {
                return a.second < b.second;
            } 
            return a.first > b.first; });
        for (int i = 0; i < dex.size(); i++)
        {
            ans.push_back(dex[i].second);
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}