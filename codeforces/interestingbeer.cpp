#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> priceShops(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> priceShops[i];
    }
    long long q;
    cin >> q;
    vector<long long> coins(q);
    for (long long i = 0; i < q; i++)
    {
        cin >> coins[i];
    }
    vector<long long> ans;
    sort(priceShops.begin(), priceShops.end());
    for (long long i = 0; i < q; i++)
    {

        int index = upper_bound(priceShops.begin(), priceShops.end(), coins[i]) - priceShops.begin();// this will return the index of the element which is just greater than the coins[i]
        ans.push_back(index);
    }
    for (long long i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}