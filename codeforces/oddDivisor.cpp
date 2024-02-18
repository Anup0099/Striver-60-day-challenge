#include <bits/stdc++.h>
using namespace std;
bool isPower(long long n)
{
    bool flag = 1;
    while (n != 1)
    {
        if (n % 2 != 0)
        {
            flag = 0;
            break;
        }
        n = n / 2;
    }
    if (flag == 0)
        return false;
    else
        return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (isPower(n))
            cout << "NO" << endl;
        else if (n % 2 == 0 and !isPower(n))
            cout << "YES" << endl;
        else if (n % 2 != 0 and !isPower(n))
            cout << "YES" << endl;
    }
    return 0;
}na