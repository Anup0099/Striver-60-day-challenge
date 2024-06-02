#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, q;
        cin >> k >> q;
        vector<int> a(k);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        vector<int> b(q);
        for (int i = 0; i < q; i++)
        {
            cin >> b[i];
        }
        vector<int> ans;
        for (int i = 0; i < b.size(); i++)
        {
            int len = b[i];
            if (len < a[0])
            {
                ans.push_back(len);
            }
            else
            {
                for (int j = 1; j <= len; j++)
                {
                    int temp = abs(a[0] - j);
                    ans.push_back(temp);
                    break;  
                }
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}