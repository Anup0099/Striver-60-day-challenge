#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> brr(n);
        int countZeroes = 0;
        for (int i = 0; i < n; i++)
        {
            while (arr[i] % 10 == 0)
            {
                arr[i] /= 10;
                countZeroes++;
            }
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}