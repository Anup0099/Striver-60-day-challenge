#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> arr(n);
        int x;
        cin >> x;
        int y;
        cin >> y;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;

        map<pair<int, int>, int> mp;
        for (int i = 0; i < n; i++)
        {
            long long rem1 = (x - (arr[i] % x)) % x, rem2 = arr[i] % y;
            count += mp[{rem1, rem2}];
            mp[{arr[i] % x, arr[i] % y}]++;
        }
        cout << count << endl;
    }
}