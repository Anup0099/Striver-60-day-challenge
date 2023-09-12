#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> size(n);
    int count = 0, total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> size[i];
        total += size[i];
    }
    sort(size.begin(), size.end(), greater<int>());
    int first = size[0];
    for (int i = 1; i < n; i++)
    {
        if (first * a / total >= b)
        {
            break;
        }
        else
        {
            total -= size[i];
            count++;

        }
    }
    cout<<count;
}