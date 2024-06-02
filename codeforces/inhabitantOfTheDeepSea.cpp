#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int &i : arr)
            cin >> i;
        int countOfShip = 0;
        int i = 0, j = n - 1;
        int attack = 0;
        while (i <= j)
        {
            if (attack == k)
            {
                break;
            }
            if (attack % 2 == 0)
            {
                if (arr[i] != 0)
                {
                    arr[i]--;
                    attack++;
                }
                if (arr[i] == 0)
                {
                    countOfShip++;
                    i++;
                }
            }
            else
            {
                if (arr[j] != 0)
                {
                    arr[j]--;

                    attack++;
                }
                if (arr[j] == 0)
                {
                    countOfShip++;
                    j--;
                }
            }
        }
        cout << countOfShip << endl;
    }
}
