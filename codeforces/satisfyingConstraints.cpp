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
        vector<pair<int, int>> arr(n);
        vector<int> one, two, three;
        for (int i = 0; i < n; i++)
        {
            int a, x;
            cin >> a >> x;
            arr[i] = {a, x};
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i].first == 1)
            {
                one.push_back(arr[i].second);
            }
            else if (arr[i].first == 2)
            {
                two.push_back(arr[i].second);
            }
            else
            {
                three.push_back(arr[i].second);
            }
        }
        // cout all the values of one, two and three
        for (auto x : one)
        {
            cout << x << " ";
        }
        cout << endl;
        for (auto x : two)
        {
            cout << x << " ";
        }
        cout << endl;
        for (auto x : three)
        {
            cout << x << " ";
        }
        cout << endl;
        int ans = 0;
        sort(one.begin(), one.end());
        sort(two.begin(), two.end());
        int first = two[0], second = one[one.size() - 1];
        for (int i = first; i <= second; i++)
        {
            if (i != three[i])
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
}