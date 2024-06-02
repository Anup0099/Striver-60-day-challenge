/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
long long  jos(int n, int k)
{
    if (n == 1)
    {
        return 1;
    }
    return (jos(n - 1, k) + k - 1) % n+1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q;
    cin >> q;
    while (q--)
    {
        long long  n, k;
        cin >> n >> k;
        cout << jos(n, k) << endl;
    }
}