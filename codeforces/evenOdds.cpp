#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;

    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         arr.push_back(i);
    //     }
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     if (arr[i] % 2 == 0)
    //     {
    //         arr.push_back(i);
    //     }
    // }
    // cout << arr[k] << endl;
    long long result;
    if (k <= (n + 1) / 2)
    {
        result = 2 * k - 1;
    }
    else
    {
        result = 2 * (k - (n + 1) / 2);
    }
    cout << result << endl;
}