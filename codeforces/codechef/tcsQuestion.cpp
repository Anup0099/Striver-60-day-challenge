#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin >> n >> p;
    if (n % p != 0)
    {
        cout << "Not Possible" << endl;
        return 0;
    }
    vector<int> arr(n + 1);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum++;
        arr[i] = sum;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int temp = (i - p);

        if (temp < 0)
        {
            temp = i + abs(temp);
            ans[i] = i + temp;
        }
        else if (temp == 0)
        {
            ans[i] = arr[i] + p;
        }
        else
        {
            ans[i] = temp;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
}