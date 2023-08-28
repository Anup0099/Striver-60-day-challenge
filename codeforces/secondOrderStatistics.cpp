#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    set<int> s;
    for (auto it : arr)
    {
        s.insert(it);
    }

    if (s.size() == 1)
        cout << "No\n";
    else
    {
        auto it = s.begin();
        it++;
        int ans = *it;
        cout << ans << "\n";
    }
    return 0;
}