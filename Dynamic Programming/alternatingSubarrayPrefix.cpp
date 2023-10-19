#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// there is an array a consisting of n non zeroes integers A A subarray of a is called alternating if any two adjacent element in it have different signs (one of them should  be negetive and the other should be positive). For example, the subarrays [1,-5,4] and [-14,7,-7,8] are alternating, but the subarrays [4,2,3,-1,4] and [2,-4,3,-1] are not.
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> ans;
        for (ll i = n - 2; i >= 0; i--)
        {
            if ((arr[i] > 0 && arr[i + 1] < 0) || (arr[i] < 0 && arr[i + 1] > 0))
            {
                ans[i] = ans[i + 1] + 1;
            }
            else
            {
                ans[i] = 1;
            }
        }
        for (ll i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}