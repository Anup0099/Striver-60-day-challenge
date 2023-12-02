#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int x, y, z;
        x = a, y = b, z = c;
        int temp;
        temp = min(y, z);
        y -= temp;
        z -= temp;
        x += temp;
        if (max(y, z) % 2 != 0)
        {
            cout << 0 << " ";
        }
        else
        {
            if (x)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }

        x = b, y = a, z = c;
        temp = min(y, z);
        y -= temp;
        z -= temp;
        x += temp;
        if (max(y, z) % 2 != 0)
        {
            cout << 0 << " ";
        }
        else
        {
            if (x)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        x = c, y = a, z = b;
        temp = min(y, z);
        y -= temp;
        z -= temp;
        x += temp;
        if (max(y, z) % 2 != 0)
        {
            cout << 0 << " ";
        }
        else
        {
            if (x)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}