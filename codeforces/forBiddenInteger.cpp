#include <bits/stdc++.h>
using namespace std;
bool solve(int n, int k, int x, int sum, vector<int> ans)
{
    if (sum == n)
    {
        cout << "YES" << endl;
        cout<<ans.size()<<endl;
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
        return true;
    }
    // we should not take x from 1 to k and we can take any element any number of times

    if (sum < n)
    {
        for (int i = 1; i <= k; i++)
        {
            if (i != x)
            {
                ans.push_back(i);
                sum += i;
                if (solve(n, k, x, sum, ans))
                {
                    return true;
                }
                sum -= i;
                ans.pop_back();
            }
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        int sum = 0;
        vector<int> ans;
        if (!solve(n, k, x, sum, ans))
        {
            cout << "NO" << endl;
        }
    }
}