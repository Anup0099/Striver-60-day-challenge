#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int sum = 0;
    int j = 1;
    for (int i = 0; i < w; i++)
    {
        sum += k * (j);
        j++;
    }

    if (sum > n)
        cout << sum - n;
    else
        cout << 0;
}