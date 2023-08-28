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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        vector<int> c;
        // why we are calculating the difference between the two arrays
        // because we have to find the maximum difference between the two arrays
        // and the maximum difference will be the maximum number of elements that we can change in the array a to make it equal to array b and vice versa for array b
        // so we are calculating the difference between the two arrays and then we are finding the maximum difference between the two arrays
        //how to find the vertices 

        for (int i = 0; i < n; i++)
        {
            c.push_back((a[i] - b[i]));
        }
        int x = *max_element(c.begin(), c.end());
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (x == c[i])
            {
                ans.push_back(i + 1);
            }
        }
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}