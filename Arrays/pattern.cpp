#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for (int i = 1; i <= 5; i++)
    // {
    //     int j = i;
    //     while (j > 0)
    //     {
    //         cout << "*";
    //         j--;
    //     }
    //     cout << endl;
    // }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}