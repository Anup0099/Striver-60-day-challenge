#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int r = 1;
    while (r * 5 < n)
    {
        n -= r * 5;
        r *= 2;
    }
    string s[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cout << s[(n - 1) / r];
}