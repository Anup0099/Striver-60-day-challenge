/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
        }
        vector<long long> ans;

        ans.push_back(arr[n - 2]);
        ans.push_back(1e9);
        for (int i = n - 3; i >= 0; i--)
        {
            ans.push_back(ans.back() - arr[i]);
        }
        reverse(begin(ans), end(ans));
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}