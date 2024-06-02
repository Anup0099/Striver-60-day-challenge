#include <bits/stdc++.h>
using namespace std;
bool canReach(int t, vector<int> &a)
{
    int n = a.size();
    int i = 0;
    while (i < t)
    {
        i += a[i];
    }
    return i == t;
}
int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    --t;
    cout << (canReach(t, a) ? "YES" : "NO");
}