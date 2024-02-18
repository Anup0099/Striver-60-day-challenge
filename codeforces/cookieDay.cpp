#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            cin >> ans[i];
        }
        sort(ans.begin(), ans.end());
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            if (k > ans[i])
            {

                temp.push_back(ans[i] % k);
            }
        }
        // for (int i = 0; i < temp.size(); i++)
        //     cout << temp[i] << " ";
        cout << temp[0] << endl;
    }
}