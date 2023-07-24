#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    if (x <= 1)
        return false;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    int a, b;
    cin >> a >> b;
    vector<int> v;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            v.push_back(i);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == a and v[i + 1] == b)
        {
            cout << "YES" << endl;
            break;
        }
        else
        {
            cout << "NO" << endl;
            break;
        }
    }
}