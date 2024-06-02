/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
long long max_factors(long long l, long long r)
{
    int max_square = std::floor(std::sqrt(r));
    return max_square;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        cout << max_factors(l, r) << endl;
    }
}