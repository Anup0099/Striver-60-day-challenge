#include <bits/stdc++.h>
using namespace std;
int trap(vector<int> &height)
{
    int n = height.size();
    vector<int> ngr(n), ngl(n);
    ngr[n - 1] = height[n - 1];
    ngl[0] = height[0];
    for (int i = 1; i < n; i++)
    {
        ngl[i] = max(ngl[i - 1], height[i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        ngr[i] = max(ngr[i + 1], height[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += min(ngl[i], ngr[i]) - height[i];
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trap(arr);
}