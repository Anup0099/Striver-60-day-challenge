#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // sort according to value
    map<string, int> m;

    for (int i = 0; i < n; i++)
    {
        m[v[i]]++;
    }
    //     3
    // QCCYXL
    // QCCYXL
    // AXGLFQDD
    int maxi = INT_MIN;
    for (auto it : m)
    {
        // print the maximum frequency
        maxi = max(maxi, it.second);
        }
    for (auto it : m)
    {
        if (it.second == maxi)
        {
            cout << it.first << endl;
            break;
        }
    }
}