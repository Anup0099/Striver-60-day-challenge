#include <bits/stdc++.h>
using namespace std;

int countOne(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n & n - 1;
        count++;
    }
    return count;
}
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(m + 1);
    for (int i = 0; i < m + 1; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    long long f = 0;

    for (int i = 0; i < m; i++)
    {
        f = arr[i] ^ arr[m]; // xor of all elements what is xor? example 1^2=3 3^2=1what happens in xor is that if both bits are same then it will give 0 else 1

        if (countOne(f) <= k)
        {
            ans++;
        }
    }
    cout << ans << endl;
}